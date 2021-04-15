//A sequence of opening and closing brackets is well-bracketed if we can pair up each opening bracket with a matching closing bracket in the usual sense. 
//For instance, the sequences (), (()) and ()(()) are well-bracketed, while (, ()), (()(), and )( are not well-bracketed.
//The nesting depth of a well-bracketed sequence tells us the maximum number of levels of inner matched brackets enclosed within outer matched brackets. 
//For instance, the nesting depth of () and ()()() is 1, the nesting depth of (()) and ()(()) is 2, the nesting depth of ((())) is 3, and so on.
//Given a well-bracketed sequence, we are interested in computing the following:
//The nesting depth, and the first position where it occurs–this will be the position of the first opening bracket at this nesting depth, 
//where the positions are numbered starting with 1.
//The maximum number of symbols between any pair of matched brackets, including both the outer brackets, 
//and the first position where this occurs–that is, the position of the first opening bracket of this segment
//For instance, the nesting depth of ()(())()(()())(()()) is 2 and the first position where this occurs is 4. 
//The opening bracket at position 10 is also at nesting depth 2 but we have to report the first position where this occurs, which is 4.
//In this sequence, the maximum number of symbols between a pair of matched bracket is 6, starting at position 9. 
//There is another such sequence of length 6 starting at position 15, but this is not the first such position.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n";
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    stack<int> v;
    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    ll max = 0, maxSym = 0;
    ll pos1, pos2;
    ll count1 = 0, count2 = 0, symbol = 0, k = 0;
    for(ll i = 0; i < n; i++){
        if(arr[i] == 1){
            v.push(i+1);
            count1++;
        }
        else if(arr[i] == 2){
            v.pop();
            count2++;
            
        }
        if(v.size() > 0 ){
            k = v.size();
            if(max < k){
                pos1 = v.top();
                max = k;
            }
        }
        if(count1 >= count2){
            symbol++;
            if(count1 == count2){
                if(maxSym < symbol){
                    maxSym = symbol;
                    pos2 = i - symbol + 2; 
                }
                symbol = 0;
                
            }
        }
        if(v.size() == 0){
            count1 = 0;
            count2 = 0;
        }
    }
    cout<<max<<" "<<pos1<<" "<<maxSym<<" "<<pos2<<endl;
    
	
    return 0;
}
 

