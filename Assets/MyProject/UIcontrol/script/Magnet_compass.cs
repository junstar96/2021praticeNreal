using UnityEngine;
using UnityEngine.UI;
using System;

public class Magnet_compass : MonoBehaviour
{
    private RectTransform recttransform;
    public Text post;
    // Start is called before the first frame update
    void Start()
    {
        recttransform = GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        post.text = ARLocation.ARLocationProvider.Instance.CurrentHeading.magneticHeading.ToString("N2");

        //카메라는 z축으로 회전하며 gps 정보에 영향을 줄 수 있는 값은 y값이다.
        recttransform.localEulerAngles = new Vector3(0, 0, (float)ARLocation.ARLocationProvider.Instance.CurrentHeading.magneticHeading);
    }
}
