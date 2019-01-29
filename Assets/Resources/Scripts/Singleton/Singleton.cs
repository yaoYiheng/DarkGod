/****************************************************
    文件：Singleton.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 15:35:43
	功能：单例基类
*****************************************************/
using System;
using UnityEngine;

public abstract class Singleton<T> : MonoBehaviour where T: MonoBehaviour
{
    private static T m_Instance = null;

    public static T Instance{ get { return m_Instance as T; }}

    public abstract void Init();
    protected virtual void Awake()
    {
        m_Instance = this as T;
    }
}