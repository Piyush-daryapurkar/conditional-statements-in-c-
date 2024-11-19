#include<iostream>
using namespace std;
int main ()
{
	//Que 6:
//Write a C++ program that takes a character input and determines if the character is:

//A vowel (a, e, i, o, u)
//A consonant (all other alphabetic characters)
//A digit (0-9)
//A special character (any other character)
    char a;
    int b;
    
    cout<<"enter a number or a character : ";
    cin>>a;
    
    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u' or a=='A' or a=='E' or a=='I' or a=='O' or a=='U' )
    {
    	cout<<"character is vovel";
	}
	
	if(a=='0' or a=='1' or a=='2' or a=='3' or a=='4' or a=='5' or a=='6' or a=='7' or a=='8' or a=='9' )
        cout<<"Digit";

	return 0;
}
