using UnityEngine;
using System;

public class House : MonoBehaviour
{
    [SerializeField] string [] tagName;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(tagName[0]))
        {
            PopUpManager.Show("DEFEAT", Time.time.ToString());
        }
        else if(other.CompareTag(tagName[1]))
        {
            PopUpManager.Show("VICTORY", Time.time.ToString());
        }

        Time.timeScale = 0;
    }
}
