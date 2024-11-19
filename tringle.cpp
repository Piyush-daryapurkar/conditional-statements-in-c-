#include<iostream>
using namespace std;
int main ()
{
	//Input the angles of a triangle and check whether the triangle is valid or not.
    int a,b,c;
    
    cout<<"enter all three angle of triangle ";
    cin>>a>>b>>c;
    
    if(a==b and b==c)
    {
    	cout<<"angles valid for triangle";
	}
    else
    {
    	cout<<"angles not valid for triangle";
	}
	


	return 0;
}
