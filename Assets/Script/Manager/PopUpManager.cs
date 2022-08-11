using UnityEngine;
using UnityEngine.UI;

public class PopUpManager : MonoBehaviour
{
    [SerializeField] Text title;
    [SerializeField] Text timer;

    private static GameObject prefab;

    // PopUpManager로 전역에서 접근할 수 있는 함수
    public static PopUpManager Show(string message, string timer)
    {
        if(prefab == null)
        {
            prefab = (GameObject)Resources.Load("Game Result Window");
        }

        GameObject obj = Instantiate(prefab);

        PopUpManager resultPopup = obj.GetComponent<PopUpManager>();
        resultPopup.UpdateContent(message, timer);

        return resultPopup;
    }
  
    // 팝업의 내용을 업데이트하는 함수
    public void UpdateContent(string titleMessage, string timerMassage)
    {
        title.text = titleMessage;
        timer.text = timerMassage;
    }

    public void CanclePopup()
    {
        Destroy(gameObject);
    }
}
