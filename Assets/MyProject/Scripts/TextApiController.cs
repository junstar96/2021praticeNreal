using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace NRKernal.NRExamples
{
    public class TextApiController : MonoBehaviour
    {

        //raycast를 위한 오브젝트
        public GameObject AndyPlanePrefab;


        [SerializeField]
        private Text apiPrint;


        // Start is called before the first frame update
        void Start()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
            apiPrint.text = BUSstationXML.Apiresult;

            Transform laserAnchor = NRInput.AnchorsHelper.GetAnchor(NRInput.RaycastMode == RaycastModeEnum.Gaze ? ControllerAnchorEnum.GazePoseTrackerAnchor : ControllerAnchorEnum.RightLaserAnchor);

            RaycastHit hitResult;
            if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, 10))
            {
                if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<NRTrackableBehaviour>() != null)
                {
                    var behaviour = hitResult.collider.gameObject.GetComponent<NRTrackableBehaviour>();
                    if (behaviour.Trackable.GetTrackableType() != TrackableType.TRACKABLE_PLANE)
                    {
                        return;
                    }

                    // Instantiate Andy model at the hit point / compensate for the hit point rotation.
                    Instantiate(AndyPlanePrefab, hitResult.point, Quaternion.identity, behaviour.transform);

                }
            }
        }
    }
    
}
