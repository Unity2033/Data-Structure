using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseEffect : MonoBehaviour
{
    [SerializeField] GameObject prefab;
    private float spawnTime;

    void Update()
    { 

        if (Input.GetMouseButton(0) && spawnTime >= 0.05f)
        {
            EffectCreate();
            spawnTime = 0;
        }

        spawnTime += Time.deltaTime;
    }

    public void EffectCreate()
    {
        Vector3 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        mousePosition.z = 0;
        Instantiate(prefab, mousePosition, Quaternion.identity);
    }
}
