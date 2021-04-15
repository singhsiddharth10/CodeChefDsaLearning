//You are developing a smartphone app. You have a list of potential customers for your app. 
//Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.
//You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.
//For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.
#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long int max[n];
    long long int k = 0;
    for(long long int i = 0; i < n; i++)
        max[k++] = arr[i] * (n-i);
    sort(max,max+k);
    cout<<max[k-1];
        
    return 0; 
}
