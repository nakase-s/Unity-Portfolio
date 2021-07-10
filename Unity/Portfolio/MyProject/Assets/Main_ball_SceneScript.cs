using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
    int n = 0;
    Rigidbody rb = null;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (n == 0)
        {
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            var v = new Vector3(0f, 0f, 200f);
            rb.AddForce(v);
        }
        n++;
        if (n == 2500)
        {
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            var v = new Vector3(0f, 1f, -200f);
            n = -2500;
            rb.AddForce(v);
        }
    }
}
