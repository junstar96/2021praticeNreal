using UnityEngine;
using UnityEngine.UI;
using System;
using NRKernal.NRExamples.MyArrowProject;


/// <summary>
/// 오브젝트가 평평한 시점에서 생성이 되도록 하기 위해서 
/// 캔버스로 수평계 역할을 해서 오브젝트를 생성한다.
/// </summary>
public class Level_View : MonoBehaviour
{
   
    private Scenemanager scenemanager;

    public GameObject ball_pivot;

    public float accuracy_value = 0.25f;
    public float borderline = 5.0f;
    public Text post;
    

    // Start is called before the first frame update
    void Start()
    {
        scenemanager = transform.parent.parent.parent.GetComponent<Scenemanager>();
    }
    // Update is called once per frame
    void Update()
    {
        post.text = "공을 가운데에 맞춰주세요";

        ball_pivot.transform.localPosition = new Vector3(Input.gyro.gravity.x * 30, Input.gyro.gravity.y * 30, 0);
        

        //경계선 언저리에 들어와 있을 경우 색깔이 붉게 변하고 좀 더 정확하게 가면 
#if !UNITY_EDITOR
        if(Input.gyro.gravity.x * 30 < borderline && Input.gyro.gravity.y * 30 < borderline)
        {
            ball_pivot.transform.GetChild(0).GetComponent<Image>().color = new Color(255, 0, 0);
            post.text = "좀만 더";
            if(Input.gyro.gravity.x * 30 < accuracy_value && Input.gyro.gravity.y * 30 < accuracy_value)
            {
                ball_pivot.transform.GetChild(0).GetComponent<Image>().color = new Color(0, 255, 0);
               
                scenemanager.compass_setting = true;
                
               
            }
        }
#else
        ball_pivot.transform.GetChild(0).GetComponent<Image>().color = new Color(0, 0, 255);
        scenemanager.compass_setting = true;
#endif






    }

    
}
