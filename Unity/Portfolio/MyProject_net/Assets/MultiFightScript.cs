using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

enum Attack
{
    None,
    Punch,
    Kick
}

public class MultiFightScript : MonoBehaviour, IPunObservable
{
    MultiFightPun2Script pun2Script;
    Animator animator;
    Transform m_Body;
    Vector3 networkPosition;
    Quaternion networkRotation;
    bool flag = false;
    float wd = 0.01f;
    Attack attack = Attack.None;
    Dictionary<string, KeyCode> kmap = 
        new Dictionary<string, KeyCode>() 
        {
            {"forward", KeyCode.I},
            {"back", KeyCode.K},
            {"right", KeyCode.L},
            {"left", KeyCode.J},
            {"punch", KeyCode.U},
            {"kick", KeyCode.O},
        };
    
    public void SetFlag(bool f)
    { 
        Debug.Log("SetFlag.");
        flag = f;
    }

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        pun2Script = GameObject.Find("Pun2Object")
            .GetComponent<MultiFightPun2Script>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!flag){ return; }
        if (!pun2Script.IsFlag()){ return; }
        if (Input.GetKeyDown(kmap["forward"]))
        {
            animator.SetBool("walk", true);
            wd = 0.01f;
        }
        if (Input.GetKeyUp(kmap["forward"]))
        {
            animator.SetBool("walk", false);
        }
        if (Input.GetKeyDown(kmap["back"]))
        {
            animator.SetBool("walk", true);
            wd = -0.01f;
        }
        if (Input.GetKeyUp(kmap["back"]))
        {
            animator.SetBool("walk", false);
        }

        if (Input.GetKeyDown(kmap["right"]))
        {
            transform.position += transform.right * 0.1f;
        }
        if (Input.GetKeyDown(kmap["left"]))
        {
            transform.position -= transform.right * 0.1f;
        }

        if (animator.GetBool("walk"))
        {
            var p = transform.position;
            p += transform.forward * wd;
            transform.position = p;
        }

        if (Input.GetKeyDown(kmap["punch"]))
        {
            animator.SetBool("punch", true);
            attack = Attack.Punch;
        }

        if (Input.GetKeyDown(kmap["kick"]))
        {
            var r = animator.transform.rotation;
            animator.transform.rotation = r;
            animator.SetBool("kick", true);
            attack = Attack.Kick;
        }
        
        if (pun2Script.GetEnemy() == null)
        {
            pun2Script.CheckEnemy();
        }
        else
        {
            transform.LookAt(pun2Script.GetEnemy().transform);
        }
        var pView = GetComponent<PhotonView>();
        if (!pView.IsMine)
        {
            transform.position = Vector3.MoveTowards(transform.position, 
                networkPosition, Time.deltaTime);
            transform.rotation = Quaternion.RotateTowards(transform.rotation, 
                networkRotation, Time.deltaTime * 100f);
        }
        pun2Script.RealtimeGui();
    }

    // 衝突時の処理
    void OnTriggerEnter(Collider collider)
    {
        if (!flag){ return; }
        if (collider.tag != "Player"){ return; }
        if (attack == Attack.Punch)
        {
            var halo = (Behaviour)GameObject.Find("kyle punch")
               .gameObject.GetComponent("Halo");
            halo.enabled = true;
            var prps = pun2Script.GetEnemyPlayer().CustomProperties;
            var n = prps["power"] is int value ? value : 0;
            prps["power"] = n - 5;
            pun2Script.GetEnemyPlayer().SetCustomProperties(prps);
        }
        if (attack == Attack.Kick)
        {
            var halo = (Behaviour)GameObject.Find("kyle kick").
                gameObject.GetComponent("Halo");
            halo.enabled = true;
            var prps = pun2Script.GetEnemyPlayer().CustomProperties;
            var n = prps["power"] is int value ? value : 0;
            prps["power"] = n - 7;
            pun2Script.GetEnemyPlayer().SetCustomProperties(prps);
        }
    }

    // 衝突終了時の処理
    void OnTriggerExit(Collider collider)
    {
        AllOffHalo();
    }

    // ハローの消去
    void AllOffHalo()
    {
        var halo = (Behaviour)GameObject.Find("kyle punch")
                .GetComponent("Halo");
        halo.enabled = false;
        halo = (Behaviour)GameObject.Find("kyle kick")
                .GetComponent("Halo");
        halo.enabled = false;
    }

    // オブジェクトのアップデート
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        var rigidbody = GetComponent<Rigidbody>();
        if (stream.IsWriting)
        {
            stream.SendNext(rigidbody.position);
            stream.SendNext(rigidbody.rotation);
            stream.SendNext(rigidbody.velocity);
        }
        else
        {
            networkPosition = (Vector3) stream.ReceiveNext();
            networkRotation = (Quaternion) stream.ReceiveNext();
            GetComponent<Rigidbody>().velocity = (Vector3) stream.ReceiveNext();

            float lag = Mathf.Abs((float) (PhotonNetwork.Time - info.timestamp));
            networkPosition += (rigidbody.velocity * lag);
        }
    }

    // 表示位置を更新
    public void FixedUpdate()
    {
        var photonView = GetComponent<PhotonView>();
        if (!photonView.IsMine)
        {
            GetComponent<Rigidbody>().position = 
                Vector3.MoveTowards(GetComponent<Rigidbody>().position, 
                    networkPosition, Time.fixedDeltaTime);
            GetComponent<Rigidbody>().rotation = 
                Quaternion.RotateTowards(GetComponent<Rigidbody>().rotation,
                    networkRotation, Time.fixedDeltaTime * 100.0f);
        }
    }
}
