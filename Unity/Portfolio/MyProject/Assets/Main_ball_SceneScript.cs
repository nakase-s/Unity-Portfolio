using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Timers;

public class Main_ball_SceneScript : MonoBehaviour
{
    bool f = true; // キーの連続入力対策フラグ
    bool finish = false; // ゲーム終了フラグ

    Dictionary<string, bool> flag = new Dictionary<string, bool>()
    {
        {"OtherSphere 0", false},
        {"OtherSphere 1", false},
        {"OtherSphere 2", false},
        {"OtherSphere 3", false},
    };

    // パラメーター変数
    Dictionary<string, int> param = new Dictionary<string, int>()
    {
        {"power", 30}, // 体力
        {"level", 1}, // レベル
        {"exp", 0} // 経験値
    };

    Vector3 cv = new Vector3(0f, 3f, -15f); // カメラ位置用(オブジェクトに加算)
    Rigidbody rb = null; // リジッドボディ
    GameObject ex = null; // 爆発

    Text message = null; // テキスト表示用UI

    Text score = null; // スコア表示用UI
    Text high = null; // ハイスコア用UI
    int EndTime = 1000; // 開始時間
    int Score = 0; // スコア
    int High = 0; // ハイスコア

    // float dt = 1.0f; // 爆破開始速度

    // 初期化処理
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        message = GameObject.Find("Message").GetComponent<Text>();
        //*スコア関係の設定
        score = GameObject.Find("Score").GetComponent<Text>();
        high = GameObject.Find("High").GetComponent<Text>();
        EndTime = (int)Time.time + 1000;
        High = PlayerPrefs.GetInt("high");
        high.text = "Record: " + High;
    }

    // 表示の更新
    void FixedUpdate()
    {
        if (Finish()){ return; } //ゲーム終了時は抜ける
        Score = EndTime - (int)Time.time; //*スコア計算
        score.text = "Time: " + Score; //*スコア表示
        if (Score <= 0)
        {   // スコアがゼロ以下なら終了
            Loss();
            return;
        }
        // カメラ位置の設定
        var sv = transform.position;
        sv.y = 1f;
        Camera.main.transform.position = sv + cv;
        // 入力処理
        var x = Input.GetAxis("Horizontal");
        var y = Input.GetAxis("Vertical");
        //var d = (float)(2.0 + param["level"] / 2);
        var v = new Vector3(x * param["level"], 0, y * param["level"]);

        // ジャンプ処理
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
        // プレイヤーを動かす
        rb.AddForce(v + vz);
    }

    // レベルを得る
    public int Level()
    {
        return param["level"];
    }

    // ゲーム終了かどうか
    public bool Finish()
    {
        return finish;
    }

    // 経験値を増やす
    public void AddExp(int n)
    {
        param["exp"] += n;
        if (param["exp"] >= 10)
        {   // 10以上ならレベルアップ
            levelUp();
        }
    }

    // 戦闘(衝突時)
    void Fight(GameObject go)
    {
        var er = go.GetComponent<Rigidbody>();
        var pr = GetComponent<Rigidbody>();
        var od = er.GetComponent<OtherData>();
        // magnitudeを比べて勝ちを判定
        if (er.velocity.magnitude > pr.velocity.magnitude)
        {   // 負けた時の処理
            Debug.Log("Player: Loss...");
            param["power"] -= od.Level();
            AddExp(od.Level() / 2);
            if (param["power"] <= 0)
            { // 体力ゼロ以下ならゲームオーバー
                Loss();
            }
        }
        else
        {   // 勝った時の処理
            Debug.Log("Player: Gotha!");
            AddExp(od.Level());
        }
    }

    // 衝突時の処理
    void OnCollisionEnter(Collision collision)
    {
        if (Finish())
        {
            return; // 終了時は抜ける
        }
        if (collision.gameObject.tag == "Other")
        {
            var data = collision.gameObject.GetComponent<OtherData>();
            Fight(collision.gameObject);
        }
    }

    // 指定のフラグをONにする
    public void Flag(string flg)
    {
        flag[flg] = true;
        if (CheckFlag())
        {   // フラグをチェックしtrueなら終了
            Win();
        }
    }

    // フラグをチェック(すべてONかどうか)
    bool CheckFlag()
    {
        var f = true;
        foreach(var item in flag)
        {   // flagの全値をチェック
            if (item.Value == false)
            {
                f = false;
            }
        }
        return f; // すべてtrueならtrue
    }
    
    // レベルアップ
    void levelUp()
    {
        if (param["level"] == 5)
        {
            return; // 終了時は抜ける
        }
        param["level"]++; // レベルを上げる
        param["exp"] = 0; // 経験値をゼロに
        message.text = "Level " + param["level"]; // テキスト表示
        TimerStart(); // タイマー開始
    }

    //タイマー開始
    void TimerStart()
    {
        StartCoroutine(TimerEnd()); // TimerEndを設定
    }

    // タイマーで実行する処理
    IEnumerator TimerEnd()
    {
        yield return new WaitForSeconds(3f); // 3秒待つ
        message.text = ""; // 表示テキストを消す
    }

    // 負けの処理
    void Loss()
    {
        message.text = "GAME OVER";
        finish = true; // 終了フラグをtrueに
    }

    //*勝ちの処理
    void Win()
    {
        message.text = "WIN!!";
        finish = true; //終了フラグをtrueに
        if (High < Score)
        {   // ハイスコアを超えていたら更新
            High = Score;
            PlayerPrefs.SetInt("high", High);
            high.text = "Record: " + High;
        }
    }
}
