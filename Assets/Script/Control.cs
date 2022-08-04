using UnityEngine;
using UnityEngine.UI;

public class Control : MonoBehaviour
{
    [SerializeField] LayerMask [] layer;
    [SerializeField] int maxHealth;

    [SerializeField] Biology biology;
    [SerializeField] Slider Gauge;

    private RaycastHit hit;
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
        maxHealth = biology.health;
    }

    void Update()
    {
        if (biology.health <= 0)
        {
            Destroy(gameObject);
        }

        Gauge.value = (float)biology.health / maxHealth;

        transform.Translate(Vector3.forward * biology.speed * Time.deltaTime);

        Ray ray = new Ray
        (
               new Vector3
               (transform.position.x, 1, transform.position.z), transform.forward           
        );

        if(Physics.Raycast(ray, out hit, 2.0f, layer[0]))
        {
            biology.speed = 0;
            animator.SetBool("Attack State", true);

            if(animator.GetCurrentAnimatorStateInfo(0).IsName("attack1"))
            {
                if(animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1)
                {
                    animator.Rebind();
                    hit.transform.GetComponent<Control>().biology.health -= biology.attack;
                }
            }
        }
        else if(Physics.Raycast(ray, out hit, 2.0f, layer[1]))
        {
            biology.speed = 0;
            animator.SetBool("Idle State", true);
        }
        else
        {
            biology.speed = 2;
            animator.SetBool("Attack State", false);
            animator.SetBool("Idle State", false);
        }
    }
}
