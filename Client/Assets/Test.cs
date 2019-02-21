/****************************************************
    文件：Test.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/19 23:57:30
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Test : MonoBehaviour 
{
    public float yRotation = 0.5f;
    public Transform Target;
    void Update()
    {
        // yRotation += 1;
        // transform.localEulerAngles = new Vector3(0, yRotation, 45);
        // transform.eulerAngles = new Vector3(0, yRotation, 45);
        // transform.Rotate(Vector3.up, Time.deltaTime * 360, Space.World);
        // transform.Rotate(Vector3.up, Time.deltaTime * 360, Space.Self);

        // Debug.Log(Input.mousePosition);
        // Debug.Log(Screen.width);

        // transform.RotateAround(Target.position, Vector3.up, yRotation);
    }
}