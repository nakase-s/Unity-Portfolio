using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
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
        
        var mp = Input.mousePosition;
        var x = (int)(mp.x / (Screen.width / 3));
        var y = (int)(mp.y / (Screen.height / 3));

        var vx = Vector3.zero;
        var vy = Vector3.zero;
        var vz = Vector3.zero;
        switch(x)
        {
            case 0:
            vx = new Vector3(-1f, 0f, 0f);
            break;
            case 2:
            vx = new Vector3(1f, 0f, 0f);
            break;
        }
        switch(y)
        {
            case 0:
            vy = new Vector3(0f, 0f, -1f);
            break;
            case 2:
            vy = new Vector3(0f, 0f, 1f);
            break;
        }
        if (Input.GetMouseButtonDown(0))
        {
            vz = new Vector3(0f, 500f, 0f);
        }
        rb.AddForce(vx + vy + vz);
    }
}
