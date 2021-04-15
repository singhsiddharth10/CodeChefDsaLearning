//As usual, I went to work in the morning. Unfortunately, I found out that my manager bought a new machine and I have to learn to operate it.
//There are N boxes in a line (numbered 1 through N). Initially, the boxes are empty, and I need to use the machine to put tokens in them. 
//For each valid i, the i-th box has a maximum capacity Si tokens. I can perform the following operation any number of times: choose an integer L (1=L=N) 
//and put one token in each of the boxes 1,2,…,L.
//My manager told me to put as many tokens as possible into the boxes in total (the distribution of tokens in the boxes does not matter). 
//Of course, it is not allowed to perform an operation that would result in the number of tokens in some box exceeding its capacity. 
//Can you help me calculate the maximum number of tokens that can be put in these boxes?
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define MOD 1000000007
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
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        ll preCount = 0;
        ll min = 0;
        ll ans = 0;
        while(n != 0){
            preCount += min * n;
            ll pos = 0;
        	for(ll i=1; i < n; i++) {
                if(arr[pos] > arr[i]) {
                    pos = i;
                }
            }
            ans += arr[pos] * n;
            n = pos;
            min = arr[pos];
         }
        cout<<ans - preCount<<endl;
	}
    
    return 0;
}

