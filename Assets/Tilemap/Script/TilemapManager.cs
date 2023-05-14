using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TilemapManager : MonoBehaviour
{
    public Tilemap tileMap;
    public TileBase tileBase;

    void Start()
    {
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                tileMap.SetTile(new Vector3Int(i, j, 0), tileBase);
            }
        }
    }

}
