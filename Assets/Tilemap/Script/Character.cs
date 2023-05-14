using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    public Vector2 direction;
    private Vector3 convertedPosition;
    [SerializeField] float speed = 2.5f;

    void Update()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.y = Input.GetAxisRaw("Vertical");

        transform.Translate(direction.normalized * speed * Time.deltaTime);

        convertedPosition = Camera.main.WorldToViewportPoint(transform.position);

        convertedPosition.x = Mathf.Clamp01(convertedPosition.x);
        convertedPosition.y = Mathf.Clamp01(convertedPosition.y);

        transform.position = Camera.main.ViewportToWorldPoint(convertedPosition);
    }
}
