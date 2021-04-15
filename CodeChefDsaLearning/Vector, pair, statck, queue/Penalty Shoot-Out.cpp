//Teams A and B are having a penalty shoot-out to decide the winner of their football match. Each team gets to take a shot N times, 
//and the team with the higher number of scored goals at the end wins. If the number of goals scored during the shoot-out 
//by each team turns out to be the same even after all 2N shots, then they stop and agree that the result is a draw.
//The two teams take shots alternately — team A shoots first, then team B shoots, then team A and so on until team B takes 
//its N-th shot (at which point each team has taken exactly N shots). Even though all 2N shots are taken, the result of the 
//shoot-out is often known earlier — e.g. if team A has already scored N-1 goals and team B has missed at least two shots, team A is definitely the winner.
//For each shot, you know whether it was a goal or a miss. You need to find the earliest moment when the winner is known — the smallest s (0=s=2N) 
//such that after s shots, the result of the shoot-out (whether team A won, team B won or the match is drawn) would be known even if we did not know 
//the results of the remaining 2N-s shots.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	string str;
    	cin>>str;
    	ll arr[2*n] = {0};
    	ll countA = 0, countB = 0;
    	ll k = 0;
    	for(ll i = 0  ; str[i] != '\0'; i++){
    		arr[k++] = (str[i] - 48);
		}
		ll arem = n, brem = n;
    	ll i;
    	ll flag = 0;
    	    for(i = 0; i < k; i++){
    	        if(i % 2 == 0)
    	            arem--;
    	        else if(i % 2 != 0)
    	            brem--;
    		    if(i % 2 == 0 && arr[i] == 1)
    		            countA++;
    		    else if(i  % 2 != 0 && arr[i ] == 1)
    		            countB++;
    		    if(countA > countB + brem || countB > countA + arem ){
    		        flag=1;
    		        break;
    		    }
    		    
    		}
    		if(flag==1)
    		    cout<<i+1<<endl;
    		else if(flag == 0)
    		    cout<<i<<endl;
		
			
	}
	return 0;
	}
