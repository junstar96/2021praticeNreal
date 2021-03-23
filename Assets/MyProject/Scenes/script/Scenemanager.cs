using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using NRKernal.NRExamples;

public class Scenemanager : MonoBehaviour
{
    private float time;
    private bool ischanged;


    // Start is called before the first frame update

    //text를 조작하기 위해 받아오자.

    

    

   
    void Start()
    {
        ischanged = false;

        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
    void Update()
    {
        if (ischanged)
        {
            return;
        }

        time += Time.deltaTime;
        

        //if (Input.location.isEnabledByUser)
        //{
        //    ischanged = true;
        //    Debug.Log("connect success");
        //    SceneManager.LoadScene(1);
        //}


        if (time > 3.0f && !ischanged)
        {
            ischanged = true;
            //Debug.LogWarning("time over load scene");
            Debug.Log("3 sec ");
            SceneManager.LoadScene(1);
            return;
        }
    }


}


