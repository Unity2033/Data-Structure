using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Star : MonoBehaviour
{
    private Vector2 direction;
    private SpriteRenderer sprite;
    [SerializeField] float speed = 0.1f;
    [SerializeField] float minSize = 0.1f, maxSize = 0.3f;
    [SerializeField] Color [] colors;

    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();

        direction = new Vector3(Random.Range(-1.0f,1.0f), Random.Range(-1.0f, 1.0f));
        float size = Random.Range(minSize, maxSize);
        
        transform.localPosition = new Vector2(size, size);

        sprite.color = colors[Random.Range(0, colors.Length)];
    }

    void Update()
    {
        transform.Translate(direction.normalized * speed);
      
        transform.localScale =
            Vector2.Lerp
            (
                transform.localScale,
                Vector2.zero,
                Time.deltaTime * speed
            );

        Color color = sprite.color;

        color.a = Mathf.Lerp(sprite.color.a, 0, Time.deltaTime * speed);
        sprite.color = color;

        if(sprite.color.a <= 0.0001f)
        {
            Destroy(gameObject);
        }
    }
}
