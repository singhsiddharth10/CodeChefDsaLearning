//Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character.
//If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. 
//For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. 
//Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
//The two halves contain the same characters but their frequencies do not match.
//Your task is simple. Given a string, you need to tell if it is a lapindrome.

#include <bits/stdc++.h> 
using namespace std; 
#define SIZE 26 
void printCharWithFreq(string str) {
    int n = str.size(); 
    if(n % 2 == 0){
	    int freq[SIZE]; 
	    int freq1[SIZE];
	    memset(freq, 0, sizeof(freq));
	    memset(freq1, 0,sizeof(freq1));
	    for (int i = 0; i < n/2; i++) 
	        freq[str[i] - 'a']++; 
	    for(int i = n/2; i < n; i++)
	    	freq1[str[i] - 'a']++;
		int flag = 0;
		int i = 0, j = 0;
		while(i<SIZE && j<SIZE){
			if(freq[i] == freq1[j]){
				i++;
				j++;
			}
			else{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}
	else if(n % 2 != 0){
		 int freq[SIZE]; 
	    int freq1[SIZE];
	    memset(freq, 0, sizeof(freq));
	    memset(freq1, 0,sizeof(freq1));
	    for (int i = 0; i < n/2; i++) 
	        freq[str[i] - 'a']++; 
	    for(int i = n/2 + 1; i < n; i++)
	    	freq1[str[i] - 'a']++;
		int flag = 0;
		int i = 0, j = 0;
		while(i<SIZE && j<SIZE){
			if(freq[i] == freq1[j]){
				i++;
				j++;
			}
			else{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}
	 
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	string str; 
	cin>>str;
    printCharWithFreq(str); 
	}
    return 0; 
}
