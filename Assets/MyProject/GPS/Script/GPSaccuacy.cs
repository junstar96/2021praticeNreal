using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPSaccuacy : MonoBehaviour
{
    private double[] latitidelist;
    private double[] longitudelist;

    private GPSaccuacy m_instance;
    public GPSaccuacy instance
    {
        get
        {
            if(m_instance == null)
            {
                m_instance = new GPSaccuacy();
            }

            return m_instance;
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //public IEnumerator MiddleAccuacy(out double check)
    //{

    //}
}
