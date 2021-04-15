//We have a rectangular region that is 100000 units along the X-axis and 500 units along the Y-axis.
//We assume that the origin (0,0) is at the bottom-left corner of this region, so that the top-left corner is at (0,500), the bottom-right at (100000,0) 
//and the top-right corner at (100000,500). We are also given the coordinates of a set of N points inside this region. The points have only integer coordinates 
//and do not appear along the X-axis or Y-axis.
//We would like to draw a rectangle, with its base on the X-axis, of maximum area within the region such that it does not contain any 
//of the N points in its interior. More specifically, the points may appear on the boundary but cannot be properly inside the rectangle.
//For example, if there are 5 points : (1,4),(2,3),(3,2),(5,1) and (5,2). Then the rectangle whose bottom-left and top-right corners are given by (0,0) and (2,3) 
//is a possibility and its area is 6. Another possibility is the rectangle with bottom-left and top-right corners at (3,0) and (5,500) with area 1000. 
//The rectangle with bottom-left at (2,3) and top-right at (100000,500) is not valid since its base does not lie on the X-axis. 
//The largest rectangle that meets the requirements in this case is the one with its bottom-left corner at (5,0) and top-right at (100000,500) with area 49997500.
//Your program should take a description of the N points and output the size of the maximum rectangle satisfying the above property that can be drawn within 
//the 100000×500 region.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <ll> vrr(100003,500);
    vrr[100000]=0;
    ll n,ht,lt,ans=0;
    cin>>n;
    ll i;
    for(i = 0; i < n; i++){
        ll x,y;
        cin>>x>>y;
        if(vrr[x] > y)
            vrr[x] = y;
    }
    stack <ll> st;
    for(i = 1; i <= 100000; i++){
        while(!st.empty() && vrr[st.top()] > vrr[i]){
            ht = vrr[st.top()];
            st.pop();
            lt = 0;
            if(!st.empty())
                lt=st.top();
            ans=max(ans,ht * (i - lt));
        }
        st.push(i);
    }
    cout<<ans<<endl;
}

    
         
    
    
