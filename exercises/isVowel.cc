#include <iostream>
#include <string>
using namespace std;
void isVowel(char ch)
{
    bool vowel=false;
    int a=0;
    int e=0;
    int o=0;
    int u=0;
    int i=0;
    switch (ch)
    {
        case 'a':
            vowel=true;
            break;
        case 'e':
            vowel=true;
            break;
        case 'o':
            vowel=true;
            break;
        case 'u':
            vowel=true;
            break;
        case 'i':
            vowel=true;
            break;
    }
        cout<<"isVowel: "<<vowel<<endl;

}

int main()
{
    char ch;
    cin >> ch;
    isVowel(ch);
    return 0;
}
