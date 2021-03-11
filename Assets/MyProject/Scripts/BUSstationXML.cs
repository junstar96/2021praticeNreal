using System;
using System.Collections;
using System.Net;
using System.IO;
using UnityEngine;
using NRKernal;


//namespace ConsoleApp1
//{
//    class Program
//    {
//        static HttpClient client = new HttpClient();
//        static void Main(string[] args)
//        {
//            string url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getSttnNoList"; // URL
//            url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D"; // Service Key
//            url += "&cityCode=25";
//            url += "&nodeNm=전통시장";
//            url += "&nodeNo=44810";
//            url += "&numOfRows=10";
//            url += "&pageNo=1";

//            var request = (HttpWebRequest)WebRequest.Create(url);
//            request.Method = "GET";

//            string results = string.Empty;
//            HttpWebResponse response;
//            using (response = request.GetResponse() as HttpWebResponse)
//            {
//                StreamReader reader = new StreamReader(response.GetResponseStream());
//                results = reader.ReadToEnd();
//            }

//            Console.WriteLine(results);
//        }
//    }
//}

public class BUSstationXML : MonoBehaviour
{
    public struct GPSinfo
    {
        public string name;
        public double lati;
        public double longi;
    }

    //받아온 api를 이용하여 관광에 도움을 줄 수 있는 버스 정보를 알아보자.
    //gpsLati : 위도좌표
    //gpsLong : 경도좌표


    [HideInInspector]
    public string url = string.Empty;

    /// <summary>
    /// 현재 위치에서 총 몇 개의 리스트가 출력되느냐 숫자
    /// </summary>
    private int list_length = 0;
    public int List_length
    {
        get
        {
            return list_length;
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


    private double mario_lat = 37.478892238702564;
    private double mario_long = 126.88646609599695;



    public float updated_lat
    {
        get
        {
            return (float)mario_lat;
        }
    }

    public float updated_long
    {
        get
        {
            return (float)mario_long;
        }
    }




    private void Awake()
    {




        //byte[] byteforencoding = Encoding.UTF8.GetBytes("4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D");
        //string encodingkey = Convert.ToBase64String(byteforencoding);
        //url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getSttnNoList"; 이건 gps를 안 사용하는 물건
        url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
        url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
        url += "&gpsLati=" + mario_lat;
        url += "&gpsLong=" + mario_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

        // Debug.Log(mario_lat.ToString());

        //url += "&cityCode=25";
        //url += "&nodeNm=전통시장";
        //url += "&nodeNo=44810";
        //url += "&numOfRows=10";
        //url += "&pageNo=1";
    }//여기서 url 주소를 정의해놓는다.

    private void OnEnable()//일단 실행되면 url에 연결하여 값을 받아온다. 
    {
        MyLocationFound();
    }

    public void MyLocationFound()
    {
        url = "";
        url = "http://openapi.tago.go.kr/openapi/service/BusSttnInfoInqireService/getCrdntPrxmtSttnList"; //gps를 사용해서 정보를 받아오는 물건
        url += "?ServiceKey=" + "4954u%2BzYV4y%2F5BRah3wXrxdhkbCaLFoKjzT7dLDNPzn44g%2BUeL30JEGzj2MitqPY9PMyqdb8yW4%2F8eo4xB1xYw%3D%3D";
        url += "&gpsLati=" + mario_lat;
        url += "&gpsLong=" + mario_long; //이건 내가 있는 위치 기준으로 받아오는 게 좋지 않으려나?

        string[] splitSupport = {   "<citycode>", "</citycode>", "<nodeid>","</nodeid>","</nodenm>",
                                                    "<nodeno>","</nodeno>", "</gpslati>", "</gpslong>"};

        var request = (HttpWebRequest)WebRequest.Create(url);
        request.Method = "GET";

        HttpWebResponse response;
        using (response = request.GetResponse() as HttpWebResponse)
        {
            StreamReader reader = new StreamReader(response.GetResponseStream());
            results = reader.ReadToEnd();

            station_name = results.Split(splitSupport, StringSplitOptions.None);

            StartCoroutine(GPSNextFollower());

            foreach (string i in station_name)
            {

                if (i.Contains("<gpslati>"))
                {
                    Debug.Log(i.Replace("<gpslati>", ""));
                }

                if (i.Contains("<gpslong>"))
                {
                    Debug.Log(i.Replace("<gpslong>", ""));
                }

                if (i.Contains("<nodenm>"))
                {
                    Debug.Log(i);
                }

                if (i.Contains("</item>"))
                {
                    list_length++;
                }


                if (i.Contains("</items>"))
                {
                    Debug.Log("endofldata :" + list_length);
                    break;
                }
            }
        }
    }

    //private void Update()
    //{

    //}//여기서 주기적으로 받는다.

    IEnumerator GPSNextFollower()
    {
        foreach (string i in station_name)
        {
            if (i.Contains("<nodenm>"))
            {
                Debug.Log("<nodenm> : " + i);
            }


            if (i.Contains("<gpslati>"))
            {
                Debug.Log("before" + mario_lat);
                mario_lat = float.Parse(i.Replace("<gpslati>", ""));
                Debug.Log("after" + mario_lat);
            }

            if (i.Contains("<gpslong>"))
            {
                Debug.Log("before" + mario_long);
                mario_long = float.Parse(i.Replace("<gpslong>", ""));
                Debug.Log(mario_long);

                yield return new WaitUntil(() => NRInput.GetButtonDown(ControllerButton.TRIGGER));
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
                    Debug.Log("<nodenm> : " + i);
                }


                if (i.Contains("<gpslati>"))
                {
                    Debug.Log("before" + mario_lat);
                    buttoninfo.lati = float.Parse(i.Replace("<gpslati>", ""));
                    Debug.Log("after" + mario_lat);
                }

                if (i.Contains("<gpslong>"))
                {
                    Debug.Log("before" + mario_long);
                    buttoninfo.longi = float.Parse(i.Replace("<gpslong>", ""));
                    Debug.Log(mario_long);
                }
            }

            if (i.Contains("</item>"))
            {
                currunt_count++;
            }
        }

        return buttoninfo;
    }
}




