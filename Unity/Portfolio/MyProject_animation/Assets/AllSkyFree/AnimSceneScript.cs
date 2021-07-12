using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimSceneScript : MonoBehaviour
{
    void Update()
    {
        var animator = GameObject.Find("Sphere").GetComponent<Animator>();
        if (Input.GetKeyDown(KeyCode.Space))
        {
            animator.speed = 0f;
        }
        if (Input.GetKeyUp(KeyCode.Space))
        {
            animator.speed = 1f;
        }
    }
}
