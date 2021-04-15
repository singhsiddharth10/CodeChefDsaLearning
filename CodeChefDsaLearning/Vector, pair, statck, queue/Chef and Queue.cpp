//All the chefs (except the Head Chef) are standing in queue to submit their bills. The chefs have different seniority. 
//In all there are N chefs of K different seniority levels. These are given to you in an array, where A1, A2, ..., AN denote the seniority of 
//chefs in the queue. AN denotes front of the queue and A1 denotes end of the queue.
//Head Chef gets an interesting thought past his head. He begins to think what if every chef starting from the end of the queue begins to delegate his 
//job of submitting bills to a chef least ahead of him in the queue but junior to him. The Head Chef's fearfulness of this scenario is f = i2 - i1 + 1, 
//where i1 is the index of chef in queue and i2 is the index of the junior chef. Head Chef's total fearfulness of chaos is the product of all the fearfulness 
//in Head Chef's mind. Note if a chef has no junior ahead of him/her in the queue then Head Chef's fearfulness for this Chef is 1.
//You are required to find the Head Chef's total fearfulness given an arrangement of Chef's in a queue. 
//Since this number can be quite large output it modulo 1000000007.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        long long int n, k;
        cin>>n>>k;
        long long int arr[n];
        for(int i = 0;i<n;i++) cin>>arr[i];
        long long int ans = 1;
        stack<pair<long long int , long long int>> st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && st.top().first  >arr[i]){
                pair<long long int,long long int> el = st.top();
                int chaos = i - el.second + 1;
                ans *= chaos;
                ans %= (1000000007);
                st.pop();
            }
            st.push(make_pair(arr[i], i));
        }
        cout<<ans<<endl;
    return 0;
}

