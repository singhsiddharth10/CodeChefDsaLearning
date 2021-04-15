//You are given an infix expression S of length N. You need to convert the given expression S to its postfix equivalent using stack.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define MOD 1000000007
ll checkPre(char c){
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        ll s;
        cin>>s;
        string str;
        cin>>str;
        stack<char> st;
        string ans;
        for(ll i = 0; i < str.size(); i++){
            if(str[i] == '(')
                st.push(str[i]);
    
            else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
                ans+=str[i]; 
            else if(str[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans+=st.top();
                    st.pop();
                }
                if(st.top() == '(')
                    st.pop();
            }
            else{
                while(!st.empty() && checkPre(str[i]) <= checkPre(st.top())){
                    ans+=st.top();
                    st.pop();
                }
                st.push(str[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
