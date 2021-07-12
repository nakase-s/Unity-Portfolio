using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OtherData : MonoBehaviour
{
    // 敵キャラのパラメーター
    Dictionary<string, int> param = new Dictionary<string, int>()
    {
        {"power", 15}, // 体力
        {"level", 1}, // レベル
        {"exp", 0} // 経験値
    };

    // レベルごとのカラー
    Color[] levelColor = {
        new Color(0f, 0f, 0.75f),
        new Color(0f, 0f, 1f),
        new Color(0.25f, 0.25f, 1f),
        new Color(0.5f, 0.5f, 1f),
        new Color(0.75f, 0.75f, 1f),
        new Color(1f, 1f, 1f)
    };

    float dv = 1f; // 移動係数

    GameObject player = null; // プレイヤー
    Main_ball_SceneScript sss = null; // メインプログラム

    // 初期化処理
    void Start()
    {
        player = GameObject.Find("Player");
        sss = player.GetComponent<Main_ball_SceneScript>();
    }

    // レベルを得る
    public int Level()
    {
        return param["level"];
    }

    // 経験値を増やす
    public void AddExp(int n)
    {
        param["exp"] += n;
        if (param["exp"] >= 10)
        {
            // 10以上ならレベルアップ
            levelUp();
        }
    }

    // レベルアップ処理
    void levelUp()
    {
        if (param["level"] == 5)
        {
            return; // 最大5まで
        }
        param["level"]++; // レベルを上げる
        param["exp"] = 0; // 経験値をゼロに
        var r = gameObject.GetComponent<Renderer>();
        r.material.color = levelColor[param["level"]];
        dv = param["level"]; // 移動係数を設定
    }

    // 戦闘
    void Fight()
    {
        var pr = player.GetComponent<Rigidbody>();
        var mr = GetComponent<Rigidbody>();
        // magnitudeを比べて価値を判定
        if (pr.velocity.magnitude > mr.velocity.magnitude)
        {   //負けた時の判定
            Debug.Log(gameObject.name + ": Loss...");
            param["power"] -= sss.Level(); // 体力低下
            AddExp(sss.Level() / 2); // 経験値追加
            if (param["power"] <= 0)
            {   // 体力ゼロで消滅する
                sss.Flag(this.gameObject.name);
                Destroy(this.gameObject);
            }
        }
        else
        {   // 勝った時の処理
            Debug.Log(gameObject.name + ": Gotcha!");
            AddExp(sss.Level()); // 経験値追加
        }
    }

    // 表示の更新
    void FixedUpdate()
    {
        if (sss.Finish())
        {
            return; // 終了時は抜ける
        }
        var dp = player.transform.position - transform.position;
        var r = GetComponent<Rigidbody>();
        r.AddForce(dp / 10 * dv);
    }

    // 衝突時の処理
    void OnCollisionEnter(Collision collision)
    {
        if (sss.Finish())
        {
            return; // 終了時は実行しない
        }
        if (collision.gameObject.name == "Player")
        {   // プレイヤーと衝突した時
            var halo = (Behaviour)GetComponent("Halo");
            halo.enabled = false;
            Fight();
        }
    }

    // 衝突終了時の処理
    void OnCollisionExit(Collision collision)
    {
        if (sss.Finish())
        {
            return; // 終了時は実行しない
        }
        if (collision.gameObject.name == "player")
        {   // プレイヤーから離れるとき
            var halo = (Behaviour)GetComponent("Halo");
            halo.enabled = false;
        }
    }
}
