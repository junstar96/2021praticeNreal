using UnityEngine;
using UnityEngine.UI;
using System;
using NRKernal.NRExamples.MyArrowProject;

public class Level_View : MonoBehaviour
{
   
    private Scenemanager scenemanager;

    public GameObject ball_pivot;

    public float accuracy_value = 0.25f;
    private Vector3 defaultvector;
    public Text post;
    public bool perent_bool = true;

    // Start is called before the first frame update
    void Start()
    {
        perent_bool = true;
        scenemanager = transform.parent.parent.parent.GetComponent<Scenemanager>();
    }
    // Update is called once per frame
    void Update()
    {
        post.text = "공을 가운데에 맞춰주세요";

        ball_pivot.transform.localPosition = new Vector3(Input.gyro.gravity.x * 30, Input.gyro.gravity.y * 30, 0);

#if !UNITY_EDITOR
        if(Input.gyro.gravity.x * 30 < 5 && Input.gyro.gravity.y * 30 < 5)
        {
            ball_pivot.transform.GetChild(0).GetComponent<Image>().color = new Color(255, 0, 0);

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
