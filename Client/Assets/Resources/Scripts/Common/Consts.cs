/****************************************************
    文件：Consts.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:45:54
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Consts 
{

    //资源路径
    public static string AudioPath = Application.streamingAssetsPath + @"/ResAudio/";
    public static string RdNamePath = "ResCfgs/rdname";
    public static string MapCfgPath = "ResCfgs/map";
    public static string PrefabPath = "PrefabPlayer/";
    //场景
    public const string S_LoadingScene = "01LoginScene";
    public const string S_MainCityScene = "02SceneMainCity";
    public const int S_MainCitySceneID = 10000;


    //音频title
    public const string A_BGMClip = "bgLogin";
    public const string A_BGMCity = "bgMainCity";
    public const string A_Login = "uiLoginBtn";
    public const string A_ButtonClick = "uiClickBtn";
    public const string A_MenuButtonClick = "uiExtenBtn";
    public const string A_UIOpenPage =  "uiOpenPage";

    //存档key
    public const string SavingAccount = "Account";
    public const string SavingPassword = "Password";

    //标准屏幕宽高
    public const float ScreenStandWidth = 5120;
    public const float ScreenStandHeight = 2880;
    public const float ScreenStandOPDisctance = 400;

    //移动速度
    public const int PlayerSpeed = 8;
    public const int Monster = 4;

    //动画Blend
    public const int IdleBlend = 0;
    public const int WalkBlend = 1;

    //运动平滑速度
    public const int AccelerSpeed = 5; 
    //角色预制
    public const string PlayerInCity = "AssassinCity";
    public const string PlayerPreb = "Assassin";
}