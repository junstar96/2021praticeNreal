using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using ARLocation;

public class Scenemanager : MonoBehaviour
{
    public GameObject loadingScene;
    public Slider slider;

    //public GameObject loadingScene;
    //public Slider slider;

    // Start is called before the first frame update

    //text를 조작하기 위해 받아오자.


    public void ChangeScene(string name)
    {
        StartCoroutine(AsyncLoadScene(name));
    }

    // Update is called once per frame
    void Update()
    {
#if !UNITY_EDITOR
        if(NRKernal.NRInput.GetButtonDown(NRKernal.ControllerButton.HOME))
        {
            if(!loadingScene.activeSelf)
            {
                loadingScene.SetActive(true);
            }
        }
#else
        if (NRKernal.NRInput.GetButtonDown(NRKernal.ControllerButton.TRIGGER))
        {
            if (!loadingScene.activeSelf)
            {
                loadingScene.SetActive(true);
            }
        }
#endif
    }


    IEnumerator AsyncLoadScene(string name)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(name);
        //loadingScene.SetActive(true);
        slider.gameObject.SetActive(true);


        while (!operation.isDone)
        {
            
            float progress = Mathf.Clamp01(operation.progress / 0.9f);
            slider.value = progress;
            Debug.Log(ARLocationProvider.Instance.HasStarted);
            if(operation.progress >= 0.9f)
            {
                if (!ARLocationProvider.Instance.HasStarted)
                {
                    operation.allowSceneActivation = false;
                }
                else if (ARLocationProvider.Instance.HasStarted)
                {
                    slider.gameObject.SetActive(false);
                    loadingScene.SetActive(false);
                    operation.allowSceneActivation = true;
                }
            }
            
            yield return null;
        }

      
  
        
        
    }
}


