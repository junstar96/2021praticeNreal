using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.IO;
using UnityEngine;
using ARLocation;

namespace NRKernal.NRExamples
{
    namespace MyArrowProject
    {
        using System.Xml;
        using System.Globalization;
        public class BUSstationXML : MonoBehaviour
        {
            
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

                public AltitudeMode getAltitudeMode()
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


            public struct GPSinfo
            {
                public string name;
                public double lati;
                public double longi;
            }

            public PrefabDatabase prefebdatabase;

            //받아온 api를 이용하여 관광에 도움을 줄 수 있는 버스 정보를 알아보자.
            //gpsLati : 위도좌표
            //gpsLong : 경도좌표


            [HideInInspector]
            public string url = string.Empty;




            /// <summary>
            /// 오브젝트들 리스트
            /// </summary>
            private List<DataEntry> _dataEntries = new List<DataEntry>();
            private List<GameObject> _stages = new List<GameObject>();
            private List<PlaceAtLocation> _placeAtComponents = new List<PlaceAtLocation>();


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

            public List<PlaceAtLocation> PlaceAtComponents
            {
                get
                {
                    return _placeAtComponents;
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


            private double current_lat = 37.478892238702564;
            private double current_long = 126.88646609599695;


            public bool makefinish = false;


            private void Awake()
            {
                



                //byte[] byteforencoding = Encoding.UTF8.GetBytes("4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D");
                //string encodingkey = Convert.ToBase64String(byteforencoding);
                //url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getSttnNoList"; 이건 gps를 안 사용하는 물건
                url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
                url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
                url += "&gpsLati=" + current_lat;
                url += "&gpsLong=" + current_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

                // Debug.Log(current_lat.ToString());

                //url += "&cityCode=25";
                //url += "&nodeNm=전통시장";
                //url += "&nodeNo=44810";
                //url += "&numOfRows=10";
                //url += "&pageNo=1";
            }//여기서 url 주소를 정의해놓는다.

            private void OnEnable()//일단 실행되면 url에 연결하여 값을 받아온다. 
            {
                MyLocationFound();
                BuildGameObjects();
            }

            public void MyLocationFound()
            {
#if !UNITY_EDITOR
                current_lat = ARLocationProvider.Instance.Provider.CurrentLocation.latitude;
                current_long = ARLocationProvider.Instance.Provider.CurrentLocation.longitude;
#else
                current_lat = 37.478892238702564;
                current_long = 126.88646609599695;
#endif
                //Debug.Log("url found");

                url = "";
                url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
                url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
                url += "&gpsLati=" + current_lat;
                url += "&gpsLong=" + current_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

                //string[] splitSupport = {   "<citycode>", "</citycode>", "<nodeid>","</nodeid>","</nodenm>",
                //                                    "<nodeno>","</nodeno>", "</gpslati>", "</gpslong>"};

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

                    //Debug.Log(nodes[0].ToString());

                    //station_name = results.Split(splitSupport, StringSplitOptions.None);

                    //StartCoroutine(GPSNextFollower());

                    foreach (XmlNode node in nodes)
                    {
                        //Debug.Log(node.InnerText);
                        int id = int.Parse(node["citycode"].InnerText);
                        double lat = double.Parse(node["gpslati"].InnerText, CultureInfo.InvariantCulture);
                        double lng = double.Parse(node["gpslong"].InnerText, CultureInfo.InvariantCulture);
                        double altitude = 0.0;
                        string altitudeMode = "GroundRelative";
                        string name = node["nodenm"].InnerText;
                        string meshId = "logo";
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

                        Debug.Log($"{id}, {lat}, {lng}, {altitude}, {altitudeMode}, {name}, {meshId}, {movementSmoothing}, {maxNumberOfLocationUpdates}, {useMovingAverage}, {hideObjectUtilItIsPlaced}");


                    }
                }
            }

    

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

            void BuildGameObjects()
            {
                foreach (var entry in _dataEntries)
                {
                    var Prefab = prefebdatabase.GetEntryById(entry.meshId);

                    if (!Prefab)
                    {
                        Debug.LogWarning($"[BusstationXml]: Prefab {entry.meshId} not found.");
                        continue;
                    }

                    var PlacementOptions = new PlaceAtLocation.PlaceAtOptions()
                    {
                        MovementSmoothing = entry.movementSmoothing,
                        MaxNumberOfLocationUpdates = entry.maxNumberOfLocationUpdates,
                        UseMovingAverage = entry.useMovingAverage,
                        HideObjectUntilItIsPlaced = entry.hideObjectUtilItIsPlaced
                    };

                    var location = new Location()
                    {
                        Latitude = entry.lat,
                        Longitude = entry.lng,
                        Altitude = entry.altitude,
                        AltitudeMode = entry.getAltitudeMode(),
                        Label = entry.name
                    };

                    var instance = PlaceAtLocation.CreatePlacedInstance(Prefab,
                                                                        location,
                                                                        PlacementOptions,
                                                                        false);

                    _stages.Add(instance);
                    _placeAtComponents.Add(instance.GetComponent<PlaceAtLocation>());
                }

                makefinish = true;
            }

            public void ChangeTargetGPS(GPSinfo target)
            {
                Debug.Log("target : " + target.name);
                current_lat = target.lati;
                current_long = target.longi;
            }

            public void GetTargetGPS(string name, double lati, double longi)
            {
                Debug.Log("get name :" + name);
                current_lat = lati;
                current_long = longi;
            }

            
        }
    }
}


