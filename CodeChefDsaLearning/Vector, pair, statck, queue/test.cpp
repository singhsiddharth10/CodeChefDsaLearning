#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define endl "\n"
int main() { 
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count = 0;
        ll sum = 0;
        for(ll i = 1; i <=n ; i++){
            if(sum <= n){
                sum += i;
                count++;
            }
            else
                break;
        }
        cout<<count<<endl;
    }
    return 0;
    
}
