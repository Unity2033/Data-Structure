using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    public AudioSource audioSource;

    [SerializeField] AudioClip [ ] audioClip;  

    void Start()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    public void Sound(int number)  
    {
        audioSource.PlayOneShot(audioClip[number]);
    }
}
