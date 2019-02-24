/****************************************************
    文件：Tools.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 17:46:21
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Tools 
{
    public static int RandomInt(int min, int max, System.Random random = null)
    {
        if (random == null)
        {
            random = new System.Random();
        }
        return random.Next(min, max + 1);
    }

    public static string SetTextColor(string content, TextColor color)
    {
        string result = "";

        switch (color)
        {
            case TextColor.Red:
            result = Consts.ColorRed + content + Consts.ColorEnd;
            break;
            case TextColor.Blue:
            result = Consts.ColorBlue + content + Consts.ColorEnd;
            break;
            case TextColor.Yellow:
            result = Consts.ColorYellow + content + Consts.ColorEnd;
            break;
            case TextColor.Green:
            result = Consts.ColorGreen + content + Consts.ColorEnd;
            break;                                    
            default:
            break;
        }

        return result;
    }
}