#include<iostream>
using namespace std;
int main ()
{
	//Write a C++ program that takes two integers and a
	//character representing an arithmetic operation (+, -, *, /) and performs the corresponding operation. 
	//If the operation character is not one of the specified characters, output an error message.
	int q,w,ans;
	char x;
	char a,s,m,d,r;
	
	cout<<"enter first number :";
	cin>>q;
	cout<<"enter second number : ";
	cin>>w;
    cout<<"enter oprators{a=add,s=substrack,m=multiplication,d=division}  :";
   	cin>>x;
   	
   	if('a'==x)
   	{
   		ans=q+w;
   		cout<<"the addition is : "<<ans<<endl;
   		
	}
	if('s'==x)
   	{
   		ans=q-w;
   		cout<<"the substrack is : "<<ans<<endl;
   		
	}
	if('m'==x)
   	{
   		ans=q*w;
   		cout<<"the multiplication is : "<<ans<<endl;
   		
	}
	if('d'==x)
   	{
   		ans=q/w;
   		cout<<"the division is : "<<ans<<endl;
   		
	}
	if('r'==x)
   	{
   		ans=q%w;
   		cout<<"the remender is : "<<ans<<endl;
   		
	}


	return 0;
}