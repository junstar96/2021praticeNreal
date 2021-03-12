using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartSceneManager : MonoBehaviour
{
    private float currentTime;

    // Start is called before the first frame update
    void Start()
    {
        currentTime = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        if(currentTime <= 5.0f)
        {
            currentTime += Time.deltaTime;
        }
        else
        {
            SceneManager.LoadScene("SampleScene");
        }
    }

    
}
