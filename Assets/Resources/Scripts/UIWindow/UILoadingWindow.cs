/****************************************************
    文件：UILoadingWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:49:21
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UILoadingWindow : MonoBehaviour 
{
    Text m_TipsText;
    Text m_ProgressText;
    Image m_Container;
    Image m_PointImage;
    Image m_ProgressImage;

    float m_ContainerW;
    //获取该脚本所在的组件的子控件的引用
    private void Awake()
    {
        m_TipsText = GetComponentInChildren<Text>();
        m_Container = transform.Find("ContainerImage").GetComponent<Image>();
        m_PointImage = transform.Find("ContainerImage/PointImage").GetComponent<Image>();
        m_ProgressImage = transform.Find("ContainerImage/ProgressImage").GetComponent<Image>();
        m_ProgressText = transform.Find("ContainerImage/ProgressText").GetComponent<Text>();

        m_ContainerW = m_Container.rectTransform.sizeDelta.x;


    }

    //初始化各个子控件
    public void InitUI()
    {
        m_TipsText.text = "这是一条提示...";
        m_ProgressText.text = "0%";
        m_ProgressImage.fillAmount = 0f;

        m_PointImage.transform.localPosition = new Vector3(- m_ContainerW / 2, 0, 0);
    }


    //提供一个供外界修改这些子控件的方法

    public void UpdateUI(float progress)
    {
        m_ProgressText.text = (int)(progress * 100) + "%";
        m_ProgressImage.fillAmount = progress;

        //计算
        var offsetX = m_ContainerW * progress - m_ContainerW / 2;
        m_PointImage.rectTransform.anchoredPosition = new Vector2(offsetX, 0);
    }
}