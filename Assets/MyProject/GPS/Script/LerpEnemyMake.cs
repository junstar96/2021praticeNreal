using UnityEngine;
using ARLocation;

public class Monster : MonoBehaviour
{
   public class DataSet
    {
        public float life;
        public string name;
    }

    public DataSet monsterData;


    protected void SetMonsterData(DataSet setting) 
    {
        monsterData.life = setting.life;
        monsterData.name = setting.name;
    }

    protected virtual void MonsterWalk()
    {
        Debug.Log("walk");
    }
}

public class LerpEnemyMake : MonoBehaviour
{

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
    }

    // Update is called once per frame
    void Update()
    {
        for(int i =0;i<child_count;i++)
        {
            
            foreach (var worldobject in GameObject.FindWithTag("GPS manu").transform.Find("ARLocationRoot").transform.GetComponentsInChildren<PlaceAtLocation>())
            {
                var currentlotation = ARLocationProvider.Instance.CurrentLocation;
                distance = (float)NRKernal.GPScontroller.DistanceInKmBetweenEarthCoordinates(worldobject.Location.Latitude, worldobject.Location.Longitude, currentlotation.latitude, currentlotation.longitude);
                distance = distance / 10;
                for(int lerpdistance = 3;lerpdistance<distance - 3;lerpdistance++)
                {
                    var zombiemake = Instantiate(zombie, Vector3.Lerp(gameObject.transform.position, worldobject.transform.position, i/distance), gameObject.transform.rotation);
                }

            }
        }
    }
}
