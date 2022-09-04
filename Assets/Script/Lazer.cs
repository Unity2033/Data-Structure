using UnityEngine;
using UnityEngine.Pool;

public class Lazer : MonoBehaviour
{
    private IObjectPool<Lazer> lazerPool;

    void Start()
    {
        
    }

    void Update()
    {
        transform.Translate(Vector3.up * 10 * Time.deltaTime);

        if(transform.position.y > 7.5f)
        {
            lazerPool.Release(this);
        }
    }

    public void SetPool(IObjectPool<Lazer> pool)
    {
        lazerPool = pool;
    }
}
