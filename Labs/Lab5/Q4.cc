/*
A palindrome is a string that reads the same both forward and backward.
For example, the string "madam" is a palindrome. Write a program that
uses a recursive function to check whether a string is a palindrome. Your
program must contain a value-returning recursive function that returns
true if the string is a palindrome and false otherwise. Do not use any
global variables; use the appropriate parameters.
*/
#include <iostream>
#include <string>
using namespace std;

bool isPalindome(string, int, int);

int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str;
    cout << "Palindrome is: ";
    if (isPalindome(str,0,str.length()-1))
        cout << "True";
    else
        cout << "False";
    return 0;
}

bool isPalindome(string word, int left, int right)
{

  if (right<=1) //if it is one character or less, it will be palindrome
  {
    return true;
  }
  else if (word[left] == word[right] && left<=right)
    {
      left++;
      right--;
      return isPalindome(word,left,right);
    }
    else
    {
      return false;
  }
}
