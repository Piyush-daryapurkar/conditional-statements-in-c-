#include<iostream>
using namespace std;
int main ()
{
	//Write a C++ program that takes an integer input representing the hour of the day (0-23)//////
	 //and outputs an appropriate greeting:
//"Good Morning" for 0-11
//"Good Afternoon" for 12-17
//"Good Evening" for 18-23
    int a;
    
    cout<<"enter the current time in hour :  ";
    cin>>a;
    
    if(a>0 and a<=11)
        cout<<"Good Morning";
        
    if(a>=12 and a<=17)
        cout<<"Good Arternoon";
		
	if(a>=1218 and a<=23)
        cout<<"Good Evening";	
		    



	return 0;
}