using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
    bool f = true;
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

        var x = Input.GetAxis("Horizontal");
        var y = Input.GetAxis("Vertical");
        var v = new Vector3(x, 0, y);

        var vz = Vector3.zero;

        var jp = Input.GetAxis("Fire1");

        if (jp > 0)
        {
            if (f)
            {
                vz = new Vector3(0f, 500f, 0f);
            }
            f = false;
        }
        else
        {
            f = true;
        }
        rb.AddForce(v + vz);
    }
}
