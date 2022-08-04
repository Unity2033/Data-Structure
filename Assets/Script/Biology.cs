using UnityEngine;

[CreateAssetMenu(fileName = "Biology", menuName = "Scriptable Object/Biology",order = 0)]
public class Biology : ScriptableObject
{
    public int health;
    public int attack;
    public int speed;
}
