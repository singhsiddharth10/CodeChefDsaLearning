#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define MOD 1000000007
ll smallest(ll arr[], ll n){
    ll temp = arr[0];
    ll pos;
    ll i;
    for(i=0; i<n; i++) {
            if(temp>arr[i]) {
                temp=arr[i];
                pos = i;
            }
        }
    return pos;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i = 0;i < n; i++)
            cin>>arr[i];
        ll pos;
        ll ans;
        ll sum = 0;
        //cout<<"ff";
        while(n > 0){
        	//cout<<"hi";
            pos = smallest(arr,n);
            ans = arr[pos] * n;
            //sum += ans;
            n = pos;
            cout<<n<<" ";
         }
        //cout<<sum;
	}
    
    return 0;
}
