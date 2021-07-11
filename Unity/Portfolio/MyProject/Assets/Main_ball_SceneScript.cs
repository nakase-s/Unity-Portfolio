using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_ball_SceneScript : MonoBehaviour
{
    bool f = true;
    Vector3 cv = new Vector3(0f, 3f, -15f);
    Rigidbody rb = null;
    GameObject ex = null;
    float dt = 1.0f;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ex = GameObject.Find("BigExplosion");
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

    // ■ otherタグのボール衝突時対象消去
    // void OnCollisionEnter(Collision collision)
    // {
    //     if (collision.gameObject.tag == "Other")
    //     {
    //         GameObject.Destroy(collision.gameObject);
    //     }
    // }

    // ■ otherタグのボール接触時対象色変更
    /* 設定
    1. トリガーにするにチェックを入れる
    2. マテリアルの Rendering Mode を Transparent へ変更する
    */
    // void OnTriggerEnter(Collider collider)
    // {
    //     if (collider.gameObject.tag == "Other")
    //     {
    //         var r = collider.gameObject.GetComponent<Renderer>();
    //         r.material.color = new Color(0f, 0f, 0f, 0.25f);
    //         r.material.SetFloat("_Metallic", 0f);
    //     }
    // }

    // ■ otherタグのボール接触時ハローON
    /* 設定
    1. コンポーネント⇒エフェクト⇒ハローを選択
    2. インスペクター Halo のチェックボックスOFF
    */
    // void OnTriggerEnter(Collider collider)
    // {
    //     if (collider.gameObject.tag == "Other")
    //     {
    //         var h = (Behaviour)collider.gameObject.GetComponent("Halo");
    //         h.enabled = true;
    //     }
    // }

    //     void OnTriggerExit(Collider collider)
    // {
    //     if (collider.gameObject.tag == "Other")
    //     {
    //         var h = (Behaviour)collider.gameObject.GetComponent("Halo");
    //         h.enabled = false;
    //     }
    // }

    // ■ otherタグのボール接触時パーティクルON
    /* 設定
    1. コンポーネント⇒エフェクト⇒パーティクルを選択
    2. インスペクターからパーティクルを設定
    */
    // void OnTriggerEnter(Collider collider)
    // {
    //     if (collider.gameObject.tag == "Other")
    //     {
    //         var ps = collider.gameObject.GetComponent<ParticleSystem>();
    //         ps.Play();
    //     }
    // }

        // ■ otherタグのボール接触時エミット放出
    /* 設定
    1. 形状は半球
    */
    // void OnTriggerEnter(Collider collider)
    // {
    //     if (collider.gameObject.tag == "Other")
    //     {
    //         var ps = collider.gameObject.GetComponent<ParticleSystem>();
    //         var ep = new ParticleSystem.EmitParams();
    //         ep.startColor = Color.yellow;
    //         ep.startSize = 0.1f;
    //         ps.Emit(ep, 1000);
    //     }
    // }

    // ■ otherタグのボール接触時爆発
    /* 設定
    1. ループ、ゲーム開始時に再生のチェックを外す
    */
    void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.tag == "Other")
        {
            var go = collider.gameObject;
            ex.transform.position = go.transform.position;
            var main = ex.GetComponent<ParticleSystem>().main;
            main.startSpeed = dt;
            dt /= 2;
            ex.GetComponent<ParticleSystem>().Play();
            GameObject.Destroy(go);
        }
    }
}
