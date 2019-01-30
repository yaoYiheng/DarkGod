/****************************************************
    文件：LoopAnimation.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 12:11:53
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class LoopAnimation : MonoBehaviour 
{
    private Animation m_Animation;

    private void Awake()
    {
        m_Animation = GetComponent<Animation>();
    }

    private void Start()
    {
        if (m_Animation != null)
        {
            InvokeRepeating("PlayAnimation", 0, 20);
        }

    }

    private void PlayAnimation()
    {
        if (m_Animation != null)
        {
            m_Animation.Play();
        }
    }
}