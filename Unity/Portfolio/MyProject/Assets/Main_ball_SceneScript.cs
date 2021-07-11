using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
    bool f = true; // キーの連続入力対策フラグ
    Vector3 cv = new Vector3(0f, 3f, -15f); // カメラ位置用(オブジェクトに加算)
    Rigidbody rb = null;
    GameObject ex = null;

    float dt = 1.0f; // 爆破開始速度

    Color[] cdata = {
        Color.white, Color.black, Color.gray,
        Color.red, Color.green, Color.blue,
        Color.cyan, Color.magenta, Color.yellow,
        new Color(1f, 1f, 0f, 1f)
    };
    System.Random r = new System.Random();

    Dictionary<string, int> data = new Dictionary<string, int>(); // 辞書
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ex = GameObject.Find("BigExplosion");
    }

    void Update()
    {
        var sv = transform.position;
        sv.y = 1f; // カメラ位置 Y軸固定用
        Camera.main.transform.position = sv + cv; // カメラ位置

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

    // ■ otherタグのボール接触時爆発
    /* 設定
    1. ループ、ゲーム開始時に再生のチェックを外す
    */
    void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.tag == "Other")
        {
            // 爆発
            var go = collider.gameObject;
            ex.transform.position = go.transform.position;
            var main = ex.GetComponent<ParticleSystem>().main;
            main.startSpeed = dt;
            dt /= 2;
            ex.GetComponent<ParticleSystem>().Play();
            
            var data = collider.gameObject.GetComponent<OtherData>();
            data.AddValue();
            data.Color = cdata[r.Next(10)];
            ChangeOther(collider.gameObject);
        }
    }

    // GameObjectの表示を更新
    void ChangeOther(GameObject ob)
    {
        var data = ob.GetComponent<OtherData>();
        var rd = ob.GetComponent<Renderer>();
        var d = 1.0f - data.value * 0.1f;
        var c = data.Color;
        c.a = d;
        rd.material.color = c;
        rd.material.SetFloat("_Metallic", d);
    }
}
