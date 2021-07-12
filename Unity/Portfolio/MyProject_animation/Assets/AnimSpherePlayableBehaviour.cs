using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

// A behaviour that is attached to a playable
public class AnimSpherePlayableBehaviour : PlayableBehaviour
{
    public GameObject[] Sphere;
    int count = 0;
    bool flag = false;

    // PlayableGraphスタート時
    public override void OnGraphStart(Playable playable)
    {
        Debug.Log("OnGraphStart");
        if (Sphere == null) { return; }
        foreach (var item in Sphere)
        {
            item.GetComponent<Renderer>().material.color = Color.magenta;
        }
    }

    // PlayableGraphストップ時
    public override void OnGraphStop(Playable playable)
    {
        Debug.Log("OnGraphStop");
        if (Sphere == null) { return; }
        foreach (var item in Sphere)
        {
            item.GetComponent<Renderer>().material.color = Color.black;
        }
    }

    // ビヘイビア スタート時
    public override void OnBehaviourPlay(Playable playable, FrameData info)
    {
        Debug.Log("OnBehaviourPlay");
    }

    // ビヘイビア ポーズ時
    public override void OnBehaviourPause(Playable playable, FrameData info)
    {
        Debug.Log("OnBehaviourPause");
    }

    // ビヘイビア ステータス更新時
    public override void PrepareFrame(Playable playable, FrameData info)
    {
        Debug.Log("PrepareFrame");
        if (Sphere == null) { return; }
        foreach (var item in Sphere)
        {
            var rd = item.GetComponent<Renderer>();
            if (flag)
            {
                var c = rd.material.color;
                c.r -= 0.02f;
                c.g += 0.02f;
                rd.material.color = c;
            }
            else
            {
                var c = rd.material.color;
                c.r += 0.02f;
                c.g -= 0.02f;
                rd.material.color = c;
            }
        }
        count++;
        if (count == 50)
        {
            count = 0;
            flag = !flag;
        }
    }
}
