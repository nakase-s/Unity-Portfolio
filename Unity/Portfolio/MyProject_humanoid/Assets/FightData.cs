using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "fight_data", menuName = "ScriptableObjects/FightData", order = 1)]
public class FightData : ScriptableObject
{
    // Kyle用キー設定
    Dictionary<string, KeyCode> kyle_map
        = new Dictionary<string, KeyCode>() 
        {
            {"forward", KeyCode.I},
            {"back", KeyCode.K},
            {"right", KeyCode.L},
            {"left", KeyCode.J},
            {"punch", KeyCode.O},
            {"kick", KeyCode.U},
        };
    // Box用キー設定
    Dictionary<string, KeyCode> box_map
        = new Dictionary<string, KeyCode>() 
        {
            {"forward", KeyCode.E},
            {"back", KeyCode.D},
            {"right", KeyCode.F},
            {"left", KeyCode.S},
            {"punch", KeyCode.R},
            {"kick", KeyCode.W},
        };

    // それぞれのパワー
    int kyle_power = 100;
    int box_power = 100;

    public void Init()
    {
        kyle_power = 100;
        box_power = 100;
    }

    // キー設定の取得
    public Dictionary<string, KeyCode> GetKyleMap()
    {
        return kyle_map;
    }
    public Dictionary<string, KeyCode> GetBoxMap()
    {
        return box_map;
    }

    // ヒット時の処理
    public void KyleHitPunch()
    {
        box_power -= 5;
    }
    public void KyleHitKick()
    {
        box_power -= 7;
    }
    public void BoxHitPunch()
    {
        kyle_power -= 5;
    }
    public void BoxHitKick()
    {
        kyle_power -= 7;
    }
    
    // 現在のパワーを取得
    public int GetKyle()
    {
        return kyle_power;
    }
    public int GetBox()
    {
        return box_power;
    }

    // ゲーム終了か？
    public bool IsEnd()
    {
        return kyle_power <= 0 || box_power <= 0;
    }
    // 終了時の処理
    public string Win()
    {
        if (kyle_power <= 0 && box_power > 0)
        {
            return "BoxUnityChan";
        }
        if (box_power <= 0 && kyle_power > 0)
        {
            return "Robot Kyle";
        }
        return null;
    }
}
