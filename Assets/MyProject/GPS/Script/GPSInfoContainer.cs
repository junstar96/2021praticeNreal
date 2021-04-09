using UnityEngine;


namespace NRKernal.NRExamples.MyArrowProject
{
    [System.Serializable]
    public class GPSInfoContainer
    {
        public class PlaceAtOptions
        {
            [Tooltip(
                 "The smoothing factor for movement due to GPS location adjustments; if set to zero it is disabled."),
             Range(0, 1)]
            public float MovementSmoothing = 0.05f;

            [Tooltip(
                "The maximum number of times this object will be affected by GPS location updates. Zero means no limits are imposed.")]
            public int MaxNumberOfLocationUpdates = 4;

            [Tooltip("If true, use a moving average filter.")]
            public bool UseMovingAverage;

            [Tooltip(
                "If true, the object will be hidden until the object is placed at the geolocation. If will enable/disable the MeshRenderer or SkinnedMeshRenderer " +
                "when available, and enable/disable all child game objects.")]
            public bool HideObjectUntilItIsPlaced = true;

            [Tooltip("The number of location updates to wait until the object is shown after being initially " +
                     "hidden from view. Only works when 'Hide Object Until It Is Placed' is set to true. If this " +
                     "is set to 0, 'Hide Object Until It Is Placed' will be disabled.")]
            public uint ShowObjectAfterThisManyUpdates = 1;
        }

        public class Location
        {

            [Tooltip("The latitude, in degrees.")]
            public double Latitude;


            [Tooltip("The longitude, in degrees.")]
            public double Longitude;


            [Tooltip("The altitude, in meters.")]
            public double Altitude;

            [Tooltip("An optional label for the location.")]
            public string Label = "";

            /// <summary>
            /// Gets the horizontal vector.
            /// </summary>
            /// <value>The horizontal vector.</value>

            public Location(double latitude = 0.0, double longitude = 0.0, double altitude = 0.0)
            {
                Latitude = latitude;
                Longitude = longitude;
                Altitude = altitude;
            }
        }
    }
}