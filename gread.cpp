#include<iostream>
using namespace std;
int main ()
{
	int p,c,m,h,e,t;
	float per;
	
	cout<<"enter physics marks : ";
	cin>>p;
	cout<<"enter chemistry marks : ";
	cin>>c;
	cout<<"enter maths marks : ";
	cin>>m;
	cout<<"enter hindi marks : ";
	cin>>h;
	cout<<"enter english marks : ";
	cin>>e;
	
	t=p+c+m+h+e;
	per=t/5;
	if(per>=91 and per<=100)
	{
		cout<<"your greade is A+";
	}
	if(per>=80 and per<=90)
	{
		cout<<"your greade is A";
	}
	if(per>=70 and per<=79)
	{
		cout<<"your greade is B+";
	}
	if(per>=60 and per<=69)
	{
		cout<<"your greade is B";
    }
    if(per>=50 and per<=59)
	{
		cout<<"your greade is C";
	}
    if(per>=40 and per<=49)
	{
		cout<<"your greade is D";
	}
	if(per>=33 and per<=39)
	{
		cout<<"your greade is E";
	}
	if(per<33)
	{
		cout<<"your greade is F";
	}


	return 0;
}
