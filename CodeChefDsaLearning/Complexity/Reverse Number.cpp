//If an Integer N, write a program to reverse the given number.
#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int remainder,reversedNumber = 0;
    while(n != 0){
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    x = reverse(n);
	    cout<<x<<"\n";
	}
	return 0;
}
