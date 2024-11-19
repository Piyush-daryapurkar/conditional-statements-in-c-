#include<iostream>
using namespace std;
int main ()
{
	//Check whether a number is negative, positive or zero.
	
	int x;
	
	cout<<"enter a number : ";
	cin>>x;
	
	if(x<0)
	{
		cout<<"negative";
	}
	if(x==0)
	{
		cout<<"zero";
	}
	if(x>0)
	{
		cout<<"posative";
	}




	return 0;
}
