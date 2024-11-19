#include<iostream>
using namespace std;
int main ()
{
	
	//Input any alphabet and check whether it is a vowel or consonant.
    char a;
    
    cout<<"enter a character : ";
    cin>>a;
    
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u' or a=='A' or a=='E' or a=='I' or a=='O' or a=='U' )
    {
    	cout<<"character is vovel";

    }
    else
    {
    	cout<<"consonant";
	}

	return 0;
}
