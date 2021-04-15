//Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most significant and dK-1 the least significant digit). 
//This number is so large that we can't give it to you on the input explicitly; instead, you are only given its starting digits and a way to construct 
//the remainder of the number.
//Specifically, you are given d0 and d1; for each i = 2, di is the sum of all preceding (more significant) digits, 
//modulo 10 — more formally, the following formula must hold: 
//Determine if N is a multiple of 3.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int  k;
        int d0, d1, add;
        cin>>k>>d0>>d1;
        add = d0+d1;
        long long int  ans = add;
	    long long int  sum = (2*add) % 10 + (4*add) % 10 + (8*add) % 10 + (6*add) % 10;
        k-=2;
        if(k>0) 
        {
            ans += (add%10);
            k--;
        }
        ans += (k/4)*sum;
    	k %= 4;
        int p=2;
        while(k--) 
        {
            ans += (p*add)%10;
            p = (p*2)%10;
        }
    	if((ans % 3) == 0)	
            cout<<"YES"<<"\n";
	    else 				
            cout<<"NO"<<"\n";
    }
    return 0;
}
