using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
    int n = 0;
    Vector3 cv = new Vector3(0f, 3f, -15f);
    Rigidbody rb = null;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        var sv = transform.position;
        sv.y = 1f;
        Camera.main.transform.position = sv + cv;

        var v = Vector3.zero;
        if (Input.GetKey(KeyCode.UpArrow))
        {
            v = new Vector3(0f, 0f, 1f);
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            v = new Vector3(0f, 0f, -1f);
        }
         if (Input.GetKey(KeyCode.LeftArrow))
        {
            v = new Vector3(-1f, 0f, 0f);
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            v = new Vector3(1f, 0f, 0f);
        }
        if (Input.GetKey(KeyCode.Space))
        {
            v = new Vector3(0f, 5f, 0f);
        }
            rb.AddForce(v);
    }
}
