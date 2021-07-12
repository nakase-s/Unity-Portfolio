using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimSceneScript : MonoBehaviour
{
    void Update()
    {
        var animator = GameObject.Find("Sphere").GetComponent<Animator>();
        float speed = animator.GetFloat("speed");
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            speed += 0.1f;
            animator.SetFloat("speed", speed);
        }
        if (Input.GetKeyUp(KeyCode.LeftArrow))
        {
            speed -= 0.1f;
            animator.SetFloat("speed", speed);
        }
        // アニメーションを切り替える
        if (Input.GetKeyDown(KeyCode.Space))
        {
            var flag = animator.GetBool("flag");
            animator.SetBool("flag", !flag);
        }
    }
}
