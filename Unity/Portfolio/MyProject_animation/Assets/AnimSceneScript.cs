using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

public class AnimSceneScript : MonoBehaviour
{
    bool flag = true;
    GameObject sphere = null;

    PlayableGraph pg;
    ScriptPlayable<AnimSpherePlayableBehaviour> pb;

    void Start()
    {
        pg = PlayableGraph.Create();
        var (acp0, go0) = CreateACP(pg);
        var (acp1, go1) = CreateACP(pg);
        var (acp2, go2) = CreateACP(pg);

        pb = ScriptPlayable<AnimSpherePlayableBehaviour>.Create(pg);
        pb.GetBehaviour().Sphere = new GameObject[]{go0, go1, go2};
        var op0 = AnimationPlayableOutput.Create(pg, "Animation", 
            go0.GetComponent<Animator>());
        op0.SetSourcePlayable(pb);
        var op1 = AnimationPlayableOutput.Create(pg, "Animation", 
            go1.GetComponent<Animator>());
        op1.SetSourcePlayable(pb);
        var op2 = AnimationPlayableOutput.Create(pg, "Animation", 
            go2.GetComponent<Animator>());
        op2.SetSourcePlayable(pb);

        pg.Play();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (flag)
            {
                pg.Stop();
            }
            else
            {
                pg.Play();
            }
            flag = !flag;
        }
    }

    // GameObjectとAnimationClipPlayableを作成
    (AnimationClipPlayable, GameObject) CreateACP(PlayableGraph graph)
    {
        var x = Random.Range(-10f, 10f);
        var y = Random.Range(0f, 5f);
        var z = Random.Range(10f, 100f);
        var ln = z;
        var wh = Random.Range(-10f, 10f);
        var tm = (int)Random.Range(5f, 25f);
        var sc = ln / tm;
        var v = new Vector3(x, y, z);
        var sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.position = v;
        var rdr = sphere.GetComponent<Renderer> ();
        rdr.material = new Material(Shader.Find("Standard"));
        rdr.material.color = Color.magenta;
        var animator = sphere.AddComponent<Animator>();

        var clip = CreateAnimationClip(v, ln, wh, sc, tm);
        animator.applyRootMotion = true;
        var acp = AnimationClipPlayable.Create(graph, clip);

        var op = AnimationPlayableOutput.Create(pg, "Animation", animator);
        op.SetSourcePlayable(acp);

        return (acp, sphere);
    }

    // アニメーションクリップを作成する
    AnimationClip CreateAnimationClip(Vector3 v, float ln, float wh, float sc, int tm)
    {
        var clip = new AnimationClip();
        clip.wrapMode = WrapMode.Loop;
        var dl = ln / tm;
        var curveX = CreateCurveX(v, ln, wh, sc, tm);
        var curveY = AnimationCurve.Linear(0f, 1f, sc, 1f);
        var curveZ = CreateCurveZ(v, ln, sc, tm);

        clip.SetCurve("",typeof(Transform), "localPosition.x", curveX);
        clip.SetCurve("",typeof(Transform), "localPosition.y", curveY);
        clip.SetCurve("",typeof(Transform), "localPosition.z", curveZ);
        return clip;
    }
    
    // カーブ作成（X軸ジグザグ）
    AnimationCurve CreateCurveX(Vector3 v, float ln, float wh, float sc, int tm)
    {
        var curveX = AnimationCurve.Linear(0f, 0f, sc, 0f);
        var dl = ln / tm;
        var x = v.z;
        var ds = sc / tm;
        for (var i = 0;i < tm;i++)
        {
            curveX.AddKey(ds * i + ds * 0f, v.x);
            curveX.AddKey(ds * i + ds * 0.25f, v.x - wh / 2);
            curveX.AddKey(ds * i + ds * 0.5f, v.x);
            curveX.AddKey(ds * i + ds * 0.75f, v.x + wh / 2);
        }
        return curveX;
    }
    // カーブ作成（Z軸まっすぐ）
    AnimationCurve CreateCurveZ(Vector3 v, float ln, float sc, int tm)
    {
        var curveZ = AnimationCurve.Linear(0f, v.z, sc, v.z - ln);
        var dl = ln / tm;
        var x = v.z;
        var ds = sc / tm;
        for (var i = 0;i < tm;i++)
        {
            curveZ.AddKey(ds *i + ds * 0f,x);
            curveZ.AddKey(ds *i + ds * 0.25f,x - dl / 4);
            curveZ.AddKey(ds *i + ds * 0.5f,x - dl / 4 *2);
            curveZ.AddKey(ds *i + ds * 0.75f,x - dl / 4 *3);
            x -= dl;
        }
        return curveZ;
    }

    void OnDisable()
    {
        pg.Destroy();
    }
}
