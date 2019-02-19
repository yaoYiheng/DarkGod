/****************************************************
    文件：PlayerController.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/17 22:57:6
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerController : MonoBehaviour 
{
    public Animator animator;
    public CharacterController character;
    private Camera cam;

    private bool isMoving = false;
    private Vector2 direction;
    private Vector3 CamOffset;

    private float targetBlend;
    private float currentBlend;
    public Vector2 Direction
    {
        get
        {
            return direction;
        }

        set
        {   
            if(value != Vector2.zero)
            {
                isMoving = true;
            }
            else
            {
                isMoving = false;
            }
            direction = value;
        }
    }

    public void InitCharator()
    {
        cam = Camera.main;
        CamOffset = transform.position - cam.transform.position;
    }

    void Update()
    {
        /* 
        var h = Input.GetAxis("Horizontal");
        var v = Input.GetAxis("Vertical");

        // Direction = new Vector2(h, v);
        var diret = new Vector2(h,v).normalized;
        if (diret != Vector2.zero)
        {
            Direction = diret;
            //开始移动的时候. 将Blend设置为行走时的动画
            SetBlend(Consts.WalkBlend);
        }
        else
        {
            Direction = Vector2.zero;
            //停止行走时
            SetBlend(Consts.IdleBlend);
        }
        */


        if (currentBlend != targetBlend)
        {
            UpdateMixBlend();
        }
        if (isMoving)
        {
            UpdateDirection();
            Moving();
            CameraFollow();
        }
    }

    void UpdateDirection()
    {   
        //会给出两个向量之间的夹角[-180, 180]
        // var angle = Vector2.SignedAngle(Direction, new Vector2(0, 1));
        //
        var angle = Vector2.SignedAngle(Direction, new Vector2(0, 1)) + cam.transform.eulerAngles.y;
        var eularAngle = new Vector3(0, angle, 0);
        transform.localEulerAngles = eularAngle;

    }
    void Moving()
    {
        character.Move(transform.forward * Time.deltaTime * Consts.PlayerSpeed);
    }
    void CameraFollow()
    {
        cam.transform.position = transform.position - CamOffset;
    }
    public void SetBlend(float blend)
    {
        targetBlend = blend;
    }

    private void UpdateMixBlend()
    {
        if (Mathf.Abs(targetBlend - currentBlend) < Consts.AccelerSpeed * Time.deltaTime)
        {
            currentBlend = targetBlend;
        }
        else if (targetBlend < currentBlend)
        {
            currentBlend -= Consts.AccelerSpeed * Time.deltaTime;
        }
        else
        {
            currentBlend += Consts.AccelerSpeed * Time.deltaTime;
        }
        animator.SetFloat("Blend", currentBlend);
    }
}