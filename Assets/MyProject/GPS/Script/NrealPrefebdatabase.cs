using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Arrow Project", menuName = "MYproject/MyPrefebdatabase")]
public class NrealPrefebdatabase : ScriptableObject
{
	[System.Serializable]
	public class PrefabDatabaseEntry
	{
		/// <summary>
		///   The `MeshId` associated with the prefab. Should match a `MeshId` from the data created
		///   the Web Map Editor (https://editor.unity-ar-gps-location.com).
		/// </summary>
		public string MeshId;

		/// <summary>
		///   The prefab you want to associate with the `MeshId`.
		/// </summary>
		public GameObject Prefab;
	}

	public List<PrefabDatabaseEntry> Entries;

	public GameObject GetEntryById(string Id)
	{
		GameObject result = null;

		foreach (var entry in Entries)
		{
			if (entry.MeshId == Id)
			{
				result = entry.Prefab;
				break;
			}
		}

		return result;
	}
}
