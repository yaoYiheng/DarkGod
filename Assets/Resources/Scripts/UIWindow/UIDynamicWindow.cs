/****************************************************
    文件：UIDynamicWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 12:41:5
	功能：Nothing
*****************************************************/
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIDynamicWindow : UIWindowRoot
{
    public Text TipsText;
    public Animation TipsAnimation;

    private Queue<String> m_TipsQue = new Queue<string>();
    private bool isTipsShow = false;
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        UpdateText(TipsText, "");
        SetActive(TipsText, false);
    }


    public void AddTips(string tips)
    {
        lock(m_TipsQue)
        {
            m_TipsQue.Enqueue(tips);
        }
    }

    private void Update()
    {
        if (m_TipsQue.Count > 0 && isTipsShow == false)
        {
            lock(m_TipsQue)
            {
                var tips = m_TipsQue.Dequeue();
                ShowTips(tips);
                isTipsShow = true;
            }

        }
    }

    private void ShowTips(string tips)
    {
        SetActive(TipsText);
        UpdateText(TipsText, tips);
        TipsAnimation.Play();

        var clip = TipsAnimation.GetClip("TipsAnimation");
        //播放完成后隐藏

        StartCoroutine(AnimationDone((clip.length), () =>
        {
            SetActive(TipsText, false);
            isTipsShow = false;
        }));

    }

    private IEnumerator AnimationDone(float time, Action aniDone)
    {
        yield return new WaitForSeconds(time);
        //等待播放完成后, 回调
        if (aniDone!=null)
        {
            aniDone();
        }
    }
}