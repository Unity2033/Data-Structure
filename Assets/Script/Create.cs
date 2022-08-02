using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Create : MonoBehaviour
{
    public void CreateUnit(int count)
    {
        switch (count)
        {
            case 0 : Instantiate
                    (
                         Resources.Load<GameObject>("Goblin"),
                         new Vector3(-15, 1, 15),
                         Quaternion.Euler(0, 90, 0)
                     ); 
            break;
        }
    }
}
