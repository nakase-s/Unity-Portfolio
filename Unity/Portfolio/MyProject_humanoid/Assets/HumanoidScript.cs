using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HumanoidScript : MonoBehaviour
{
    Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        animator.SetFloat("Speed", 0f);
        animator.SetFloat("Direction", 0f);
        animator.SetBool("Jump", false);
        animator.SetBool("Rest", false);

        if (Input.GetKey(KeyCode.UpArrow))
        {
            animator.SetFloat("Speed", 0.2f);
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            animator.SetFloat("Speed", -0.2f);
        }
        if (Input.GetKey(KeyCode.LeftShift))
        {
            var s = animator.GetFloat("Speed");
            animator.SetFloat("Speed", s * 3);
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            var d = animator.GetFloat("Direction");
            animator.SetFloat("Direction", 0.2f);
        }
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            var d = animator.GetFloat("Direction");
            animator.SetFloat("Direction", -0.2f);
        }
        if (Input.GetKey(KeyCode.Space))
        {
            if (animator.GetFloat("Speed") == 0f)
            {
                animator.SetBool("Rest", true);
            }
            else
            {
                animator.SetBool("Jump", true);
            }
        }

        var fwd = Vector3.forward * animator.GetFloat("Speed");
        transform.Translate(fwd / 25);
        var drct = animator.GetFloat("Direction");
        transform.Rotate(0, drct, 0);
    }
}
