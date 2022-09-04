using UnityEngine;
using UnityEngine.Pool;

public class Control : MonoBehaviour
{
    private IObjectPool<Lazer> lazerPool;
    [SerializeField] Transform muzzlePosition;

    public void Awake()
    {
        lazerPool = new ObjectPool<Lazer>(CreateLazer, GetLazer, ReleaseLazer, DestoryLazer, maxSize : 20);

        InvokeRepeating("T", 0, 1);

    }

    public void T()
    {
        lazerPool.Get();
    }



    private Lazer CreateLazer()
    {
        Lazer lazer = Instantiate(Resources.Load<Lazer>("Lazer"), muzzlePosition.position, Quaternion.identity);
        lazer.SetPool(lazerPool);
        return lazer;
    }

    private void GetLazer(Lazer lazer)
    {
        lazer.gameObject.SetActive(true);
    }

    private void ReleaseLazer(Lazer lazer)
    {
        lazer.gameObject.SetActive(false);
    }

    private void DestoryLazer(Lazer lazer)
    {
        Destroy(lazer.gameObject);
    }
}
