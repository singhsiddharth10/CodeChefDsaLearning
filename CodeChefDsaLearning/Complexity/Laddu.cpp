//You might have heard about our new goodie distribution program aka the "Laddu Accrual System". This problem is designed to give you a glimpse of its rules. 
//You can read the page once before attempting the problem if you wish, nonetheless we will be providing all the information needed here itself.
//Laddu Accrual System is our new goodie distribution program. In this program, we will be distributing 
//Laddus in place of goodies for your winnings and various other activities (described below), that you perform on our system. Once you collect enough number of Laddus, 
//you can then redeem them to get yourself anything from a wide range of CodeChef goodies.
//Let us know about various activities and amount of laddus you get corresponding to them.
//Contest Win (CodeChef’s Long, Cook-Off, LTIME, or any contest hosted with us) : 300 + Bonus (Bonus = 20 - contest rank). Note that if your rank is > 20, 
//then you won't get any bonus.
//Top Contributor on Discuss : 300
//Bug Finder : 50 - 1000 (depending on the bug severity). It may also fetch you a CodeChef internship!
//Contest Hosting : 50
//You can do a checkout for redeeming laddus once a month. The minimum laddus redeemable at Check Out are 200 for Indians and 400 for the rest of the world.
//You are given history of various activities of a user. The user has not redeemed any of the its laddus accrued.. 
//Now the user just wants to redeem as less amount of laddus he/she can, so that the laddus can last for as long as possible. 
//Find out for how many maximum number of months he can redeem the laddus.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t=0,num,server;
	string origion,result,contri,bug;
	int flag,rank,finalresult;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    finalresult=0;
	    cin>>num;
	    cin>>origion;
	    if(origion.compare("INDIAN")==0)
	        flag=1;
	    else
	        flag=0;
	    for(int j=0;j<num;j++){
	        cin>>result;
	           if(result.compare("CONTEST_WON")==0){
	               cin>>server;
	               if(server<21)
	               finalresult+=300+20-server;
	               else
	               finalresult+=300;
	           }
	          else if(result.compare("BUG_FOUND")==0){
	               cin>>server;
	               finalresult+=server;
	           }
	      
	           if(result.compare("TOP_CONTRIBUTOR")==0)
	           
	               finalresult+=300;
	           
	           if(result.compare("CONTEST_HOSTED")==0)
	           
	               finalresult+=50;
	        }

	    if(flag)
	        cout<<finalresult/200<<endl;
	    else
	        cout<<finalresult/400<<endl;
	}
	return 0;
}
