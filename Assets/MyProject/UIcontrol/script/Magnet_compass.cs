using UnityEngine;
using UnityEngine.UI;

public class Magnet_compass : MonoBehaviour
{
    private RectTransform recttransform;
    // Start is called before the first frame update
    void Start()
    {
        recttransform = GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        recttransform.eulerAngles = new Vector3(0, 0, Input.compass.magneticHeading);
    }
}
