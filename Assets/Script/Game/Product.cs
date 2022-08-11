using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "Product", menuName = "Scriptable Object/Product", order = 1)]
public class Product : ScriptableObject
{
    public int price;
    public Sprite priceTag;
    public Sprite border;
    public Sprite Picture;
}
