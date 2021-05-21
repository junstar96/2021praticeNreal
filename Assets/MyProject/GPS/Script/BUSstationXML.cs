using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;


namespace NRKernal.NRExamples
{
    public enum AltitudeMode
    {
        GroundRelative,
        DeviceRelative,
        Absolute,
        Ignore
    };

   

    /// <summary>
    /// 화살표를 이동시키는 데 관여하는 함수들은 이 네임스페이스를 쓴다.
    /// </summary>
    namespace MyArrowProject
    {
        using System.Xml;
        using System.Globalization;
        /// <summary>
        /// 버스 정류장의 위치를 표시하기 위해 xml 데이터를 인터넷에서 받아와 읽는다.
        /// </summary>
        public class BUSstationXML : MonoBehaviour
        {
            /// <summary>
            /// 기존에 사용하던 에셋의 방식에 맞게 적은 데이터 셋
            /// 다 쓰지 않을 경우 중요한 lat, lng, name은 중요하니까 이것만이라도 추출해서 쓰자.
            /// </summary>
            public class DataEntry
            {
                public int id;
                public double lat;
                public double lng;
                public double altitude;
                public string altitudeMode;
                public string name;
                public string meshId;
                public float movementSmoothing;
                public int maxNumberOfLocationUpdates;
                public bool useMovingAverage;
                public bool hideObjectUtilItIsPlaced;

                public AltitudeMode GetAltitudeMode()
                {
                    if (altitudeMode == "GroundRelative")
                    {
                        return AltitudeMode.GroundRelative;
                    }
                    else if (altitudeMode == "DeviceRelative")
                    {
                        return AltitudeMode.DeviceRelative;
                    }
                    else if (altitudeMode == "Absolute")
                    {
                        return AltitudeMode.Absolute;
                    }
                    else
                    {
                        return AltitudeMode.Ignore;
                    }
                }
            }

            /// <summary>
            /// 원래는 이 곳에 gps 정보를 받았으나 
            /// gps 정보를 받는 함수를 인스턴스화 해서
            /// 디버그 등의 경우에나 쓰게 됨.
            /// </summary>
            public struct GPSinfo
            {
                public string name;
                public double lati;
                public double longi;
            }

            /// <summary>
            /// 어떤 오브젝트를 만들 것인가 하는 변수
            /// </summary>
            public NrealPrefebdatabase prefebdatabase;

            //받아온 api를 이용하여 관광에 도움을 줄 수 있는 버스 정보를 알아보자.
            //gpsLati : 위도좌표
            //gpsLong : 경도좌표

            //버스 정류장 api를 읽어올 url이다.
            [HideInInspector]
            public string url = string.Empty;




            /// <summary>
            /// 오브젝트들 리스트
            /// </summary>
            private List<DataEntry> _dataEntries = new List<DataEntry>();
            private List<GameObject> _stages = new List<GameObject>();
            //private List<PlaceAtLocation> _placeAtComponents = new List<PlaceAtLocation>();


            public List<DataEntry> XmlListForNreal
            {
                get
                {
                    return _dataEntries;
                }
            }

            public List<GameObject> stagePoint
            {
                get
                {
                    return _stages;
                }
            }

            //먼저 아이템 구분을 저장하도록 하고, 호출이 왔을 때 이 안에서 데이터를 나눠서 전달하도록 해보자. 
            //아직 수정 안 함.
            string[] station_name;

            private static string results = string.Empty;
            // Start is called before the first frame update


            public static string Apiresult
            {
                get
                {
                    return results;
                }
            }


            //유니티 상에서는 gps를 읽을 수 없으므로 회사 gps를 받아놓은 것
            private double current_lat = 37.478892238702564;
            private double current_long = 126.88646609599695;


            //끝났는지 확인용.
            public bool makefinish = false;

            /// <summary>
            /// 씬이 넘어가면서 한 번만 호출되면 됨.
            /// </summary>
            private void Awake()
            {
                if (!Input.location.isEnabledByUser)
                {
                    current_lat = 37.478892238702564;
                    current_long = 126.88646609599695;
                }
                else
                {
                    current_lat = GPScontroller.Instance.lat;
                    current_long = GPScontroller.Instance.longi;
                }

                current_lat = GPScontroller.Instance.lat;
                current_long = GPScontroller.Instance.longi;
               
               
                url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
                url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
                url += "&gpsLati=" + current_lat;
                url += "&gpsLong=" + current_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

              
            }//여기서 url 주소를 정의해놓는다.

            private void OnEnable()//일단 실행되면 url에 연결하여 값을 받아온다. 
            {
                MyLocationFound();
                BuildGameObjects();
            }


            /// <summary>
            /// url을 연결하고 다음 xml 정보를 읽어서 데이터를 추출.
            /// </summary>
            public void MyLocationFound()
            {

                url = "";
                url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
                url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
                url += "&gpsLati=" + current_lat;
                url += "&gpsLong=" + current_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

                //string[] splitSupport = {   "<citycode>", "</citycode>", "<nodeid>","</nodeid>","</nodenm>",
                //                                    "<nodeno>","</nodeno>", "</gpslati>", "</gpslong>"}; 혹시 다른 방식으로 사용될 가능성이 있으므로 여기다 적어둠.

                var request = (HttpWebRequest)WebRequest.Create(url);
                request.Method = "GET";

                HttpWebResponse response;
                using (response = request.GetResponse() as HttpWebResponse)
                {
                    StreamReader reader = new StreamReader(response.GetResponseStream());
                    results = reader.ReadToEnd();

                    XmlDocument busXml = new XmlDocument();

                    try
                    {
                        busXml.LoadXml(results);
                    }
                    catch(XmlException e)
                    {
                        Debug.LogError("[BUSxmlLoader]: Failed to parse XML file: " + e.Message);
                    }


                    var root = busXml.SelectSingleNode("response/body/items");
                    var nodes = root.ChildNodes;

                    

                    //이 함수 말고 webmaploader를 베이스로 만들었기에 이런 형식
                    foreach (XmlNode node in nodes)
                    {
                        //Debug.Log(node.InnerText);
                        int id = int.Parse(node["citycode"].InnerText);
                        double lat = double.Parse(node["gpslati"].InnerText, CultureInfo.InvariantCulture);
                        double lng = double.Parse(node["gpslong"].InnerText, CultureInfo.InvariantCulture);
                        double altitude = 0.0;
                        string altitudeMode = "GroundRelative";
                        string name = node["nodenm"].InnerText;
                        string meshId = string.Empty;
                        if (gameObject.name == "GameSenterMaker")
                        {
                            meshId = "train";
                        }
                        else
                        {
                            meshId = "logo";
                        }
                        
                        float movementSmoothing = 0.05f;
                        int maxNumberOfLocationUpdates = 0;
                        bool useMovingAverage = false;
                        bool hideObjectUtilItIsPlaced = true;


                        DataEntry entry = new DataEntry()
                        {
                            id = id,
                            lat = lat,
                            lng = lng,
                            altitudeMode = altitudeMode,
                            altitude = altitude,
                            name = name,
                            meshId = meshId,
                            movementSmoothing = movementSmoothing,
                            maxNumberOfLocationUpdates = maxNumberOfLocationUpdates,
                            useMovingAverage = useMovingAverage,
                            hideObjectUtilItIsPlaced = hideObjectUtilItIsPlaced
                        };

                        _dataEntries.Add(entry);
                        Debug.Log(ObjectPositionSetting.GPSConvertWorldPos(current_lat, current_long, lat, lng));


                    }
                }
            }

            /// <summary>
            /// 지금은 업데이트 할 필요 없지만 데이터를 갱신하거나 할 경우엔 필요.
            /// </summary>
            private void Update()
            {
                if(!Input.location.isEnabledByUser)
                {
                    current_lat = 37.478892238702564;
                    current_long = 126.88646609599695;
                }
                else
                {
                    current_lat = GPScontroller.Instance.lat;
                    current_long = GPScontroller.Instance.longi;
                }
            }


            /// <summary>
            /// 현재는 사용하지 않는 방식.
            /// </summary>
            /// <param name="count"></param>
            /// <returns></returns>
            public GPSinfo ButtonInfo(int count)
            {
                GPSinfo buttoninfo = new GPSinfo();
                int currunt_count = 0;

                foreach (string i in station_name)
                {
                    if (currunt_count == count)
                    {
                        if (i.Contains("<nodenm>"))
                        {
                            buttoninfo.name = i.Replace("<nodenm>", "");
                            //Debug.Log("<nodenm> : " + i);
                        }


                        if (i.Contains("<gpslati>"))
                        {
                            //Debug.Log("before" + current_lat);
                            buttoninfo.lati = float.Parse(i.Replace("<gpslati>", ""));
                            //Debug.Log("after" + current_lat);
                        }

                        if (i.Contains("<gpslong>"))
                        {
                            //Debug.Log("before" + current_long);
                            buttoninfo.longi = float.Parse(i.Replace("<gpslong>", ""));
                            //Debug.Log(current_long);
                        }
                    }

                    if (i.Contains("</item>"))
                    {
                        currunt_count++;
                    }
                }

                return buttoninfo;
            }

            /// <summary>
            /// 버스 정류장의 위치에 instantiate 하는 함수
            /// </summary>
            public void BuildGameObjects()
            {
                foreach (var entry in _dataEntries)
                {
                    var Prefab = prefebdatabase.GetEntryById(entry.meshId);

                    if (!Prefab)
                    {
                        Debug.LogWarning($"[BusstationXml]: Prefab {entry.meshId} not found.");
                        continue;
                    }

                    

                    var Latitude = entry.lat;
                    var Longitude = entry.lng;
                    var Altitude = entry.altitude;
                    var AltitudeMode = entry.GetAltitudeMode();
                    var Label = entry.name;

                   

                    var convertgps = ObjectPositionSetting.GPSConvertWorldPos(current_lat, current_long, Latitude, Longitude);
                    var instance = Instantiate(Prefab, new Vector3(convertgps.y, (float)Altitude, convertgps.x), Quaternion.identity, gameObject.transform);
                    
                    instance.name = Label;


                    _stages.Add(instance);
                }

                makefinish = true;
            }


            /// <summary>
            /// 버튼을 통해 목적지의 gps 정보를 갱신
            /// </summary>
            /// <param name="target"></param>
            public void ChangeTargetGPS(GPSinfo target)
            {
                Debug.Log("target : " + target.name);
                current_lat = target.lati;
                current_long = target.longi;
            }


            /// <summary>
            /// 버튼을 통해 목적지의 gps 정보 갱신, 이 쪽은 나중에 interface를 적용할 수도 있어서 남겨둠.
            /// </summary>
            /// <param name="name"></param>
            /// <param name="lati"></param>
            /// <param name="longi"></param>
            public void GetTargetGPS(string name, double lati, double longi)
            {
                Debug.Log("get name :" + name);
                current_lat = lati;
                current_long = longi;
            }

            
        }
    }
}


