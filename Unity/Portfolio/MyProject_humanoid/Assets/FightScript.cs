using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

enum Attack
{
    None,
    Punch,
    Kick
}

public class FightScript : MonoBehaviour
{
    public FightData fdata;
    Text message;
    Text kyle_power;
    Text box_power;
    GameObject enemy;
    Animator animator;
    float wd = 0.01f;
    Attack attack = Attack.None;
    Dictionary<string, KeyCode> kmap;

    // Start is called before the first frame update
    void Start()
    {
        fdata.Init();
        animator = GetComponent<Animator>();
        message = GameObject.Find("Text").GetComponent<Text>();
        kyle_power = GameObject.Find("KylePower").GetComponent<Text>();
        box_power = GameObject.Find("BoxUnityPower").GetComponent<Text>();

        var list = GameObject.FindGameObjectsWithTag("Player");
        if (list[0] == gameObject)
        {
            enemy = list[1];
        }
        else
        {
            enemy = list[0];
        }
        if (gameObject.name == "Robot Kyle")
        {
            kmap = fdata.GetKyleMap();
        }
        else
        {
            kmap = fdata.GetBoxMap();
        }
        StartCoroutine(TimerEnd());
    }

    IEnumerator TimerEnd()
    {
        yield return new WaitForSeconds(3f);
        message.text = "";
    }

    // Update is called once per frame
    void Update()
    {
        if (fdata.IsEnd()){ return; }

        kyle_power.text = "Kyle: " + fdata.kyle_power;
        box_power.text = "BoxUnity: " + fdata.box_power;

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

        transform.LookAt(enemy.transform);
    }

    void OnTriggerEnter(Collider collider)
    {
        if (fdata.IsEnd()){ return; }
        if (collider.tag != "Player"){ return; }
        if (name == "Robot Kyle")
        {
            if (attack == Attack.Punch)
            {
                var halo = (Behaviour)GameObject.Find("kyle punch")
                        .GetComponent("Halo");
                halo.enabled = true;
                fdata.KyleHitPunch();
            }
            if (attack == Attack.Kick)
            {
                var halo = (Behaviour)GameObject.Find("kyle kick")
                        .GetComponent("Halo");
                halo.enabled = true;
                fdata.KyleHitKick();
            }
        }
        if (name == "BoxUnityChan")
        {
            if (attack == Attack.Punch)
            {
                var halo = (Behaviour)GameObject.Find("box punch")
                        .GetComponent("Halo");
                halo.enabled = true;
                fdata.BoxHitPunch();
            }
            if (attack == Attack.Kick)
            {
                var halo = (Behaviour)GameObject.Find("box kick")
                        .GetComponent("Halo");
                halo.enabled = true;
                fdata.BoxHitKick();
            }
        }

    }

    void OnTriggerExit(Collider collider)
    {
        AllOffHalo();
        if (fdata.IsEnd())
        {
            Finish();
        }
    }

    void AllOffHalo()
    {
        var halo = (Behaviour)GameObject.Find("kyle punch")
                .GetComponent("Halo");
        halo.enabled = false;
        halo = (Behaviour)GameObject.Find("kyle kick")
                .GetComponent("Halo");
        halo.enabled = false;
        halo = (Behaviour)GameObject.Find("box punch")
                .GetComponent("Halo");
        halo.enabled = false;
        halo = (Behaviour)GameObject.Find("box kick")
                .GetComponent("Halo");
        halo.enabled = false;
    }

    void Finish()
    {
        if (fdata.Win() == name)
        {
            animator.SetBool("win", true);
        }
        else
        {
            animator.SetBool("loss", true);
        }
        message.text = fdata.Win() + " WIN!!";

                if (fdata.kyle_power <= 0 && fdata.box_power > 0)
        {
            kyle_power.text = "Kyle: " + 0;
        }
        if (fdata.box_power <= 0 && fdata.kyle_power > 0)
        {
            box_power.text = "BoxUnity: " + 0;
        }
    }
}
