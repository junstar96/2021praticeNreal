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

    private Scenemanager instance;

    private ARLocation.WebMapLoader checkgetgps;

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
        checkgetgps = GetComponent<ARLocation.WebMapLoader>();
        ischanged = false;

        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
    void Update()
    {
        if(ischanged)
        {
            return;
        }


        time += Time.deltaTime;

        if (time > 3.0f && ischanged )
        {
            ischanged = true;
            Debug.LogWarning("time over load scene");
            SceneManager.LoadScene(1);
            return;
        }
        if (checkgetgps.XmlListForNreal != null)
        {
            if (time > 3.0f)
            {
                ischanged = true;
                Debug.LogWarning("time over load scene");
                SceneManager.LoadScene(1);
            }
            if (Input.location.status == LocationServiceStatus.Running && !ischanged)
            {
                ischanged = true;
                SceneManager.LoadScene(1);
            }

            if (Input.location.status != LocationServiceStatus.Running && time > 3.0f && !ischanged)
            {
                ischanged = true;
                Debug.LogWarning("time over load scene");
                SceneManager.LoadScene(1);
            }
            //if (!ischanged)
            //{
            //    if(time < 1.0f)
            //    {
            //        Debug.Log("not yet");
            //        return;
            //    }
            //    ischanged = true;
            //    SceneManager.LoadScene(1);
            //}
        }


    }


}


