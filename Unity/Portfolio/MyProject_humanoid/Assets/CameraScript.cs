using UnityEngine;

public class CameraScript : MonoBehaviour
{
    public GameObject[] target;
    public float distance;
    private Vector3 d;

    // Start is called before the first frame update
    void Start()
    {
        d = Vector3.forward * distance + Vector3.up;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 allp = Vector3.zero;
        foreach( var ob in target)
        {
            allp += ob.transform.position;
        }
        var p = allp / target.Length;
        p.y = 0f;
        transform.position = p + d;
        transform.RotateAround(p, Vector3.up, 0.1f);
        d = transform.position - p;
        d.y = 1.5f;
    }
}
