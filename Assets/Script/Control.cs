using UnityEngine;
using UnityEngine.UI;

public class Control : MonoBehaviour
{
    [SerializeField] LayerMask [] layer;
    [SerializeField] int maxHealth;
    [SerializeField] int currentHealth;
    [SerializeField] int attack;
    [SerializeField] float speed;

    [SerializeField] Slider Gauge;

    private RaycastHit hit;
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
        maxHealth = currentHealth;
    }

    void Update()
    {
        if (currentHealth <= 0)
        {
            Destroy(gameObject);
        }

        Gauge.value = (float)currentHealth / maxHealth;

        transform.Translate(Vector3.forward * speed * Time.deltaTime);

        Ray ray = new Ray
        (
               new Vector3
               (transform.position.x, 1, transform.position.z), transform.forward           
        );

        if(Physics.Raycast(ray, out hit, 2.0f, layer[0]))
        {
            speed = 0;
            animator.SetBool("Attack State", true);

            if (animator.GetCurrentAnimatorStateInfo(0).IsName("attack1"))
            {
                if(animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1)
                {
                    animator.Rebind();
                    hit.transform.GetComponent<Control>().currentHealth -= attack;
                }
            }
        }
        else if(Physics.Raycast(ray, out hit, 2.0f, layer[1]))
        {
            speed = 0;
            animator.SetBool("Idle State", true);
        }
        else
        {
            speed = 2;
            animator.SetBool("Attack State", false);
            animator.SetBool("Idle State", false);
        }
    }
}
