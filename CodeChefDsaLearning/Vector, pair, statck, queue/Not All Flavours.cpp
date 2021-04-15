//Chef made N pieces of cakes, numbered them 1 through N and arranged them in a row in this order. There are K possible types of flavours (numbered 1 through K); 
//for each valid i, the i-th piece of cake has a flavour Ai.
//Chef wants to select a contiguous subsegment of the pieces of cake such that there is at least one flavour which does not occur in that subsegment. 
//Find the maximum possible length of such a subsegment of cakes.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n";
ll check( ll arr[], ll n){
    for(ll i = 0 ; i < n ; i++)
    {
        if(arr[i] == 0)
            return 1;
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k ;
	    cin>>n>>k;
	    ll arr[n],fav[k];
	    for(ll i = 0 ; i < k ; i++)
	        fav[i] = 0;
	    for(ll i = 0 ; i < n; i++)
	        cin>>arr[i];
	        
	    queue <int> qu;
	    ll len  = 0 ;
	    for(ll i = 0 ; i < n; i++){
	        fav[arr[i] - 1]++;
	        qu.push(arr[i]);
	        while(!check(fav,k)){
	            fav[ qu.front() - 1]--;
	            qu.pop();
	        }
	        if(qu.size() > len)
	            len = qu.size();
	        
	    }
	    cout<<len<<endl;
    }
return 0;
}
