using UnityEngine;
using UnityEngine.SceneManagement;
using ARLocation;

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

        

        if (ARLocationProvider.Instance.HasStarted)
        {
            //NREmulatorManager.Instance?.NativeEmulatorApi?.SetHeadTrackingPose(new Vector3(0, 0, 0), Quaternion.Euler(0, -Input.compass.magneticHeading, 0));
            ischanged = true;
            //Debug.LogWarning("time over load scene");
            Debug.Log("provider setting");
            SceneManager.LoadScene(1);
            return;
        }
    }


}


