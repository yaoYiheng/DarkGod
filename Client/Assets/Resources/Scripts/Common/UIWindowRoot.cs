/****************************************************
    文件：UIWindowRoot.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 0:44:31
	功能：UI页面基类
*****************************************************/
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIWindowRoot : MonoBehaviour
{
    //如果在其子类中需要加载资源, 则可以使用这个成员变量
    protected ResourceService resourceService = null;
    protected AudioService audioService = null;
    protected NetService netService = null;

    public void SetWindowState(bool isActive = true)
    {
        //判断物体当前状态是否与传入状态相同
        //如果不同则设置成为目标状态
        if (gameObject.activeSelf != isActive)
        {
            //gameObject.SetActive(isActive);
            SetActive(gameObject, isActive);
        }
        //如果是需要显示的状态,则进行初始化
        if (isActive)
        {
            InitUIwindow();
        }
        else//不需要的话则清除
        {
            Clear();
        }
    }

    protected virtual void Clear()
    {
        resourceService = null;
        audioService = null;
        netService = null;
    }
    protected virtual void InitUIwindow()
    {
        resourceService = ResourceService.Instance;
        audioService = AudioService.Instance;
        netService = NetService.Instance;
    }

    //对零碎的代码进行整合

    #region 工具方法

    //设置物体的激活与否
    protected void SetActive(GameObject go, bool isActive = true)
    {
        go.SetActive(isActive);
    }
    protected void SetActive(Transform go, bool isActive = true)
    {
        go.transform.gameObject.SetActive(isActive);
    }
    protected void SetActive(RectTransform go, bool isActive = true)
    {
        go.transform.gameObject.SetActive(isActive);
    }
    protected void SetActive(Image go, bool isActive = true)
    {
        go.gameObject.SetActive(isActive);
    }
    protected void SetActive(Text go, bool isActive = true)
    {
        go.gameObject.SetActive(isActive);
    }
    //设置Text上的显示
    protected void UpdateText(Text text, string context = "")
    {
        text.text = context;
    }
    protected void UpdateText(Text text, int context = 0)
    {
        UpdateText(text, context.ToString());
    }
    protected void UpdateText(Transform text, string context = "")
    {
        UpdateText(text.GetComponent<Text>(), context.ToString());
    }
    protected void UpdateText(Transform text, int context = 0)
    {
        UpdateText(text.GetComponent<Text>(), context.ToString());
    }

    #endregion

    #region 点击事件

    ///判断传入对象上是否 有挂载<T>的组件, 如果没有则添加
    private T GetOrAddCommponent<T>(GameObject go) where T: Component
    {
        T t = go.GetComponent<T>();
        if(t == null)
            t = go.AddComponent<T>();

        return t;
    }
    protected void OnClickDown(GameObject go, Action<PointerEventData> action)
    {   //向传入的组件上添加<Listener>
        var listener = GetOrAddCommponent<Listener>(go);      
        //向监听的声明添加事件.
        listener.onClickDown = action;
    }
        protected void OnClickUp(GameObject go, Action<PointerEventData> action)
    {
        var listener = GetOrAddCommponent<Listener>(go);      
        listener.onClickUp = action;
    }
        protected void OnDrag(GameObject go, Action<PointerEventData> action)
    {
        var listener = GetOrAddCommponent<Listener>(go);      
        listener.onDrag = action;
    }
    

    #endregion
}