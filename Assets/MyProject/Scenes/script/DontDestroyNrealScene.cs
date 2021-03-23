using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestroyNrealScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
   
}
