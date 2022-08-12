using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(nameof(Spawn));
    }

    public IEnumerator Spawn()
    {
        while (true)
        {
            Instantiate
            (
                Resources.Load<GameObject>("Enemy Goblin"),
                new Vector3(17.5f, 1, 15),
                Quaternion.Euler(0, -90, 0)
            );

            yield return new WaitForSeconds(Random.Range(1, 10));
        }
    }
  
}
