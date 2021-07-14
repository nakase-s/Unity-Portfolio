using UnityEngine;

#if true // ■カメラ: 常に背後から

public class CameraScript : MonoBehaviour
{
    public GameObject target;
    public float distance;
    
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame

    // ■ターゲット追従
    // void Update()
    // {
    //     var p = target.transform.position;
    //     transform.position = p + Vector3.forward 
    //         * distance + Vector3.up;
    // }
    
    // ■常に背後から
    void Update()
    {
        var p = target.transform.position;
        transform.position = p + target.transform.forward 
            * distance * -1 + Vector3.up;
        p.y = 1f;
        transform.LookAt(p);
    }
}

#endif // ■カメラ: 常に背後から

#if false // ■カメラ: ターゲットのまわりをゆっくり回転

using UnityEngine;

public class CameraScript : MonoBehaviour
{
    public GameObject target;
    public float distance;
    Vector3 d;

    // Start is called before the first frame update
    void Start()
    {
        d = Vector3.forward * distance + Vector3.up;
    }

    // Update is called once per frame
    void Update()
    {
        var p = target.transform.position;
        p.y = 0f;
        transform.position = p + d;
        transform.RotateAround(p, Vector3.up, 0.1f);
        d = transform.position - p;
    }
}

#endif // ■カメラ: ターゲットのまわりをゆっくり回転
