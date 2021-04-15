//in Chefland, there is a very famous street where N types of street food (numbered 1 through N) are offered. For each valid i, 
//there are Si stores that offer food of the i-th type, the price of one piece of food of this type is Vi (the same in each of these stores) 
//and each day, Pi people come to buy it; each of these people wants to buy one piece of food of the i-th type.
//Chef is planning to open a new store at this street, where he would offer food of one of these N types. 
//Chef assumes that the people who want to buy the type of food he'd offer will split equally among all stores that offer it, 
//and if this is impossible, i.e. the number of these people p is not divisible by the number of these stores s, then only ?ps? people will buy food from Chef.
//Chef wants to maximise his daily profit. Help Chef choose which type of food to offer and find the maximum daily profit he can make.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll x, y;
        ll n;
        ll max=0;
        cin >> n;
         while(n--){
            ll s,p,v; 
            cin >> s >> p >> v ;
            y = p/(s+1);
            x = y * v;
            if(x >= max)
            max = x; 
        
        }
        cout << max << "\n" ;
     }
}
