//The year is 2102 and today is the day of ZCO. This year there are N contests and the starting and ending times of each contest is known to you. 
//You have to participate in exactly one of these contests. Different contests may overlap. The duration of different contests might be different.
//There is only one examination centre. 
//There is a wormhole V that transports you from your house to the examination centre and another wormhole W that transports you from the examination centre back 
//to your house. Obviously, transportation through a wormhole does not take any time; it is instantaneous. But the wormholes can be used at only certain fixed times, 
//and these are known to you.
//So, you use a V wormhole to reach the exam centre, possibly wait for some time before the next contest begins, take part in the contest, 
//possibly wait for some more time and then use a W wormhole to return back home. If you leave through a V wormhole at time t1 and come back through a 
//W wormhole at time t2, then the total time you have spent is (t2 - t1 + 1). Your aim is to spend as little time as possible overall 
//while ensuring that you take part in one of the contests.
//You can reach the centre exactly at the starting time of the contest, if possible. And you can leave the examination centre the very second the contest ends, 
//if possible. You can assume that you will always be able to attend at least one contest–that is, there will always be a contest such that there is a V wormhole
//before it and a W wormhole after it.
//For instance, suppose there are 3 contests with (start,end) times (15,21), (5,10), and (7,25), respectively. 
//Suppose the V wormhole is available at times 4, 14, 25, 2 and the W wormhole is available at times 13 and 21. 
//In this case, you can leave by the V wormhole at time 14, take part in the contest from time 15 to 21, and 
//then use the W wormhole at time 21 to get back home. Therefore the time you have spent is (21 - 14 + 1) = 8. 
//You can check that you cannot do better than this.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define MOD 1000000007
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     ll n,n1,n2;
     cin>>n>>n1>>n2;
     ll k1 = 0, k2 = 0;
     
     vector<ll> initial;
     vector<ll> final;
     //cout<<n<<" "<<n1<<" " <<n2;
     for(ll i = 0; i < n; i++){
         ll x,y;
         cin>>x>>y;
         initial.push_back(x);
         final.push_back(y);
     }
    vector<ll> vrr;
    vector<ll> wrr;
    for(ll i = 0; i < n1; i++){
        ll x;
        cin>>x;
        vrr.push_back(x);
    }
    for(ll i = 0; i < n2; i++){
        ll x;
        cin>>x;
        wrr.push_back(x);
    }
    sort (vrr.begin() , vrr.end());
    sort (wrr.begin() , wrr.end());
    
    ll ans = 1000000;
    for (ll i = 0 ; i < initial.size() ; i++){
        ll r = upper_bound(vrr.begin(), vrr.end(), initial[i]) - vrr.begin() - 1;
        ll q = lower_bound(wrr.begin(), wrr.end(), final[i]) - wrr.begin();
        if((r < vrr.size()) && ( q < wrr.size()))
            ans = min(ans, wrr[q] - vrr[r] + 1);
    }  
        
    cout<<ans<<endl;
        
     return 0;
}
