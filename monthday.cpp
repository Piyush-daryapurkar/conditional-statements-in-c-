#include<iostream>
using namespace std;
int main ()
{
//Input the month number and print the number of days in that month.
    int a;
    cout<<"enter month number : ";
    cin>>a;

	if(a==2)
    {
    	cout<<"28/29 day's in this month";
	}
	if(a==1 || a==3|| a==5 || a==7 || a==9 || a==10 || a==12 ) //3,5,7,9,10,12
    {
    	cout<<"31 day's in this month";
	}
	if(a==4 || a==6 || a==8 || a==11 )
    {
    	cout<<"30 day's in this month";
	}


	return 0;
}
