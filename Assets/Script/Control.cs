using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control : MonoBehaviour
{
    [SerializeField] float speed;
    [SerializeField] LayerMask [] layer;
    RaycastHit hit;

    Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        transform.Translate(Vector3.forward * speed * Time.deltaTime);

        Ray ray = new Ray(transform.position, transform.forward);

        if(Physics.Raycast(ray, out hit, 2.0f, layer[0]))
        {
            speed = 0.0f;
            animator.SetBool("Attack State", true);
        }
    }
}
