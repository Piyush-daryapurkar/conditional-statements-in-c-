#include<iostream>
using namespace std;
int main ()
{
	//Que 4:
//Write a C++ program that takes an integer input representing a person's age and 
//outputs the corresponding age group:

//Child: 0-12 years
//Teen: 13-17 years
//Adult: 18-64 years
//Senior: 65 years and above
    int a;
    
    cout<<"enter your age : ";
    cin>>a;
    
    if(a>0 and a<=12)
        cout<<"child";
        
    if(a>12 and a<=17)
        cout<<"Teen";
		    
    if(a>18 and a<=64)
        cout<<"Adult";    

    if(a>65)
        cout<<"Senior";

	return 0;
}
