#include<iostream>
using namespace std;
int main ()
{
	//Que 7:
//Write a C++ program that calculates the electricity bill 
//based on the units consumed and the following tariff structure:

//Up to 100 units: $0.50 per unit
//101-200 units: $0.75 per unit
//201-300 units: $1.20 per unit
//Above 300 units: $1.50 per unit
    int a,b;
    
    cout<<"enter your electricity units you burn : ";
    cin>>a;
    
    if(a<=100)
    {
    	b=a*0.50;
    	cout<<"your electricity bill is "<<b;
	}
	 if(a>101 and a<=200)
    {
    	b=a*0.75;
    	cout<<"your electricity bill is "<<b;
	}
	 if(a>201 and a<=300)
    {
    	b=a*1.20;
    	cout<<"your electricity bill is "<<b;
	}
	 if(a>300)
    {
    	b=a*1.50;
    	cout<<"your electricity bill is "<<b;
	}



	return 0;
}
