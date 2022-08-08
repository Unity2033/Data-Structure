using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    public static DataManager instance;
    public int money;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    void Start()
    {
        Load();
        StartCoroutine(Increase());
    }
 
    IEnumerator Increase()
    {
        while (true)
        {
            yield return new WaitForSeconds(1f);
            money += 100;
            Save();
        }
    }

    public void Save()
    {
        PlayerPrefs.SetInt("money", money);
    }

    public void Load()
    {
        money = PlayerPrefs.GetInt("money");
    }

}
