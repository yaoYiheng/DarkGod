/****************************************************
    文件：BaseData.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/18 11:19:58
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

    public class AutoGuideConfigures: BaseData<AutoGuideConfigures>
    {
    public int npcID;
    public string dilogArr;
    public int actID;
    public int coin;
    public int exp;
    }
    public class MapConfigures: BaseData<MapConfigures>
    {
    public string mapName;
    public string sceneName;
    public Vector3 mainCamPos;
    public Vector3 mainCamRot;
    public Vector3 playerBornPos;
    public Vector3 playerBornRot;
    }

    public class BaseData<T>
    {
    public int ID;
    }