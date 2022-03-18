/*
Write a program that reads a string and outputs the number of times each lowercase vowel appears in it.
Your program must contain a function with one of its parameters as a string variable and return the number of times each lowercase vowel appears in it.
Also write a program to test your function. (Note that if str is a variable of type string, then str.at(i) returns the character at the ith position.
The position of the first character is 0. Also, str.length() returns the length of the str, that is, the number of characters in str.)
*/
#include <iostream>
#include <string>
using namespace std;
/*
function void because it doesn't have a return value
parameters str for the string
*/
void vowelsCount(string str){
    //declaring variables
	int length = str.length();
	int a=0;
	int e=0;
	int i=0;
	int o=0;
	int u=0;
    
    //loop to go through the string
	for (int j=0; j < length; j++)
	{
	    char ch=str.at(j);
	    //switch statement to find the vowels and count them
		switch (ch)
		{
		    case 'a':
		        a+=1;
		        break;
		    case 'e':
		        e+=1;
		        break;
		    case 'i':
		        i+=1;
		        break;
		    case 'o':
		        o+=1;
		        break;
		    case 'u':
		        u+=1;
		        break;
		  
		} //the end of switch statement
	} //the end of the loop
	cout<<"The vowel \"a\" appeared "<<a<<" times."<<endl;
	cout<<"The vowel \"e\" appeared "<<e<<" times."<<endl;
	cout<<"The vowel \"i\" appeared "<<i<<" times."<<endl;
	cout<<"The vowel \"o\" appeared "<<o<<" times."<<endl;
	cout<<"The vowel \"u\" appeared "<<u<<" times."<<endl;
}

int main()
{
    //declaring the variable
    string str;
    //reading the string from the user
    cout<<"Enter any string: "<<endl;
    getline(cin,str,'\n');
    //calling the function
	vowelsCount(str);
}
