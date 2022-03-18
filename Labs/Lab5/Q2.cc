/*
Write a recursive function, vowels, that returns the number of vowels in a
string. Also, write a program to test your function.
*/
#include <iostream>
#include <string>
using namespace std;
int vowels(string s)
{
    if (s.length() == 1){
        char c=s[0];
        c = toupper(c);
        if (c =='A' || c =='E' || c =='O'|| c =='I'|| c == 'U')
            return 1;
        else
            return 0;
    }
    else
        return vowels(s.substr(0,1)) + vowels(s.substr(1,s.length()));
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s,'\n');
    cout<<"The string you entered has: "<<vowels(s)<<" vowles."<<endl;
    
    return 0;
}
