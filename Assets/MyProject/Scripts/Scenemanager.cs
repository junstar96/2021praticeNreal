using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using NRKernal.NRExamples;

public class Scenemanager : MonoBehaviour
{
    private float count_time;


    // Start is called before the first frame update

    //text를 조작하기 위해 받아오자.



    private Scenemanager instance;

    public Scenemanager scenemanager
    {
        get
        {
            if (instance == null)
            {
                instance = this;
            }
            return instance;
        }
    }
    void Start()
    {
        count_time = 0.0f;

        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
    void Update()
    {
        if (count_time >= 1.0f)
        {
            count_time += Time.deltaTime;
            if (count_time >= 1.0f)
            {
                SceneManager.LoadScene(1);

            }
        }





    }


}


