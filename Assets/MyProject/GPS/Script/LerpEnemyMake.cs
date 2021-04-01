using UnityEngine;
using ARLocation;



public class LerpEnemyMake : MonoBehaviour
{
    public SphereCollider playerfollower;
    /// <summary> 10m 당 하나씩 소환할 거니까 해보자. </summary>
    private float distance;

    /// <summary>
    /// 세이브 보인트 간의 몬스터도 혹시 모르니까 추가
    /// </summary>
    private float child_count;

    public GameObject zombie;

    // Start is called before the first frame update
    void Start()
    {
        child_count = GameObject.FindWithTag("GPS manu").transform.Find("ARLocationRoot").transform.childCount;

        for (int i = 0; i < child_count; i++)
        {

            foreach (var worldobject in GameObject.FindWithTag("GPS manu").transform.Find("ARLocationRoot").transform.GetComponentsInChildren<PlaceAtLocation>())
            {
                var currentlotation = ARLocationProvider.Instance.CurrentLocation;
                distance = (float)NRKernal.GPScontroller.DistanceInKmBetweenEarthCoordinates(worldobject.Location.Latitude, worldobject.Location.Longitude, currentlotation.latitude, currentlotation.longitude);
                distance = distance / 10;
                Debug.Log("distance :" + distance);
                for (int lerpdistance = 0; lerpdistance < 10; lerpdistance++)
                {
                    var zombiemake = Instantiate(zombie, Vector3.Lerp(gameObject.transform.position, worldobject.transform.position, 0.1f * lerpdistance), gameObject.transform.rotation);
                    zombiemake.SetActive(true);
                    zombiemake.name = worldobject.Location.Label + "number : " + lerpdistance;
                }

            }
        }
    }

    // Update is called once per frame
   
}
