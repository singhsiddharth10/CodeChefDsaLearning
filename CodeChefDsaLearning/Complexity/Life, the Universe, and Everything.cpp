//Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... 
//rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    vector<int> v;
    int x;
    while(cin>>x){
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] != 42)
            cout<<v[i]<<"\n";
        else
            break;
    }
    return 0;
}
