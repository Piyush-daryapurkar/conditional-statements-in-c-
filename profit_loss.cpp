#include<iostream>
using namespace std;
int main ()
{

	
	int p,s,pro,loss;
	
	cout<<"enter the purches price : ";
	cin>>p;
	cout<<"enter the sell price : ";
	cin>>s;
	
	if(p>s)
	{
		loss=p-s;
		cout<<"your loss is "<<loss<<"rs";
		
	}
	if(s>p)
	{
		pro=s-p;
		cout<<"your profit is "<<pro<<"rs";
		
	}

return 0;
}
