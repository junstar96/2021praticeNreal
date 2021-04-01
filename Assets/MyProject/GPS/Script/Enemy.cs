using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public class DataSet
    {
        public float life;
        public string name;
    }

    public DataSet monsterData;

    private Transform player;

    private NavMeshAgent nvAgent;

    protected void SetMonsterData(DataSet setting)
    {
        monsterData.life = setting.life;
        monsterData.name = setting.name;
    }

    protected virtual void MonsterWalk()
    {
        Debug.Log("walk");
    }

    private void Awake()
    {
        player = GameObject.FindWithTag("Player").GetComponent<Transform>();
        nvAgent = GetComponent<NavMeshAgent>();

        nvAgent.destination = player.position;
    }

    private void OnEnable()
    {
        EnemyRendomSetting();
        StartCoroutine(EnemyCheckDistance());
    }


    private void EnemyRendomSetting()
    {
        float magnet_radian = Random.Range(0.0f, 360.0f) * Mathf.PI / 180;

        transform.position = new Vector3(transform.position.x * Mathf.Cos(magnet_radian) - transform.position.z * Mathf.Sin(magnet_radian),
                                    transform.position.y,
                                    transform.position.z * Mathf.Cos(magnet_radian) + transform.position.x * Mathf.Sin(magnet_radian));
    }
    

    IEnumerator EnemyCheckDistance()
    {
       
        while(player.gameObject.activeSelf)
        {
            float check_distance = 50.0f;
            float playerToEnemy = Vector3.Distance(gameObject.transform.position, player.transform.position);
            Debug.Log(gameObject.name + ": distance :  " + playerToEnemy);
            
            if (playerToEnemy < check_distance)
            {
                transform.LookAt(player.transform.position);
            }
            else
            {
                
            }
            yield return new WaitForSeconds(1.0f/36.0f);
        }
       
    }
}
