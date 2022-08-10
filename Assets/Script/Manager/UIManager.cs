using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    [SerializeField] Text moneyText;

    void Update()
    {
        moneyText.text = DataManager.instance.money.ToString() + " $";
    }
}
