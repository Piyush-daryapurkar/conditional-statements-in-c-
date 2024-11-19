#include<iostream>
using namespace std;
int main ()
{
	int s,a;
	cout<<"enter your seet number : ";
	cin>>s;

	a=s%8;
	
	if(a==1 || a==4)
	{
		cout<<"lower barth";
	}
	if(a==2 || a==5)
	{
		cout<<"middle barth";
	}
	if(a==3 || a==6)
	{
		cout<<"upper barth";
	}
	if(a==7)
	{
		cout<<"side lower ";
	}
	if(a==0)
	{
		cout<<"side upper ";
	}
		if(s>72)
	{
	   cout<<"seet not avalable";	
	}

	return 0;
}
