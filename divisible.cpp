#include<iostream>
using namespace std;
int main ()
{
	//Check whether a number is divisible by 5 and 11 or not.
    int x;
    
    cout<<"enter number : ";
    cin>>x;
    
    if(x%5==0)
    {
    	cout<<"number is divisible by 5";
	}
    if( x%11==0)
    {
    	cout<<"number is  divisible by 11";
	}
	else
	{
		cout<<" number is not divisible by 5 and 11 ";
	}
    
    

	return 0;
}
