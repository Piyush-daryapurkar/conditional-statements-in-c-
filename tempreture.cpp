#include<iostream>
using namespace std;
int main ()
{
	
//Write a C++ program that takes a floating-point number representing a temperature in Celsius and classifies it as:
//"Freezing" if the temperature is below 0
//"Cold" if the temperature is between 0 and 10
//"Warm" if the temperature is between 10 and 25
//"Hot" if the temperature is above 25
    float x;
    
    cout<<"enter the temperature in Celsius : ";
    cin>>x;
    
    if(x<0)
    {
    	cout<<"Freezing";
	}
	if(x>0 and x<=10)
    {
    	cout<<"Cold";
	}

    if(x>10 and x<25)
    {
    	cout<<"Warm";
	}

    if(x>25)
    {
    	cout<<"Hot";
	}


	return 0;
}
