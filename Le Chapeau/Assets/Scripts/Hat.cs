using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Hat : MonoBehaviourPunCallbacks
{
    public GameObject hatRef;
    // Start is called before the first frame update

    void OnCollisionEnter(Collision collision)
    {
        photonView.RPC("HideHat", RpcTarget.All);
    }

    [PunRPC]
    void HideHat()
    {
        Destroy(hatRef.gameObject);
    }
}
