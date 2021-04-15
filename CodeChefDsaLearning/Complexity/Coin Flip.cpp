//Little Elephant was fond of inventing new games. After a lot of research, Little Elephant came to know that most of the animals in the forest were showing 
//less interest to play the multi-player games.Little Elephant had started to invent single player games, 
//and succeeded in inventing the new single player game named COIN FLIP.
//In this game the player will use N coins numbered from 1 to N, and all the coins will be facing in "Same direction" (Either Head or Tail),
//which will be decided by the player before starting of the game.
//The player needs to play N rounds.In the k-th round the player will flip the face of the all coins whose number is less than or equal to k. 
//That is, the face of coin i will be reversed, from Head to Tail, or, from Tail to Head, for i = k.
//Elephant needs to guess the total number of coins showing a particular face after playing N rounds. 
//Elephant really becomes quite fond of this game COIN FLIP, so Elephant plays G times. Please help the Elephant to find out the answer.
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	long long int t;
  	cin>>t;
  	while(t--){
      	long long int g;
      	cin>>g;
 		while(g--){
 		    long long int i,n,q;
 		    cin>>i>>n>>q;
 		    if(i == 1 && q == 1){
 		        if(n % 2 == 0)
 		            cout<<n/2<<"\n";
 		        else if(n % 2 != 0)
 		            cout<<n/2<<"\n";
 		    }
 		    else if(i == 1 && q == 2){
 		        if(n % 2 == 0)
 		            cout<<n/2<<"\n";
 		        else if(n % 2 != 0)
 		            cout<<n/2 + 1<<"\n";
 		    }
 		    else if(i == 2 && q == 1){
 		        if(n % 2 == 0)
 		            cout<<n/2<<"\n";
 		        else if(n % 2 != 0)
 		            cout<<n/2 + 1<<"\n";
 		    }
 		    else if(i == 2 && q == 2){
 		        if(n % 2 == 0)
 		            cout<<n/2<<"\n";
 		        else if(n % 2 != 0)
 		            cout<<n/2<<"\n";
 		    }
 		}
      }
	return 0; 
} 
