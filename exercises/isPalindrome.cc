#include <iostream>
#include <string>
using namespace std;

void get_input(char arr[],int size)
{
    cout << "Enter the word:"<<endl;
    cin.getline(arr,size); //the last element is reserved for '\0'
}

void print_array(const char arr[], int size)
{
    cout << "Your array is: "<<arr<<endl;
}


void isPalindrome(char arr[],int size, bool&palindrome)
{
    palindrome = true;
    size=size-1;
    for (int i=0; i<size; i++)
    {

        if (arr[i]!=arr[size-1-i])
        {
            palindrome=false;
            break;
        }
        else if (arr[i]==arr[size-i])
            palindrome==true;
    }
}

void display_result(bool palindrome)
{
    if (palindrome==true)
        cout << "palindrome is: true"<<endl;
    else if (palindrome==false)
        cout << "palindrome is: false"<<endl;
    cout <<"Thank you for using our program :)"<<endl;
}


int main()
{
    const int size = 5;
    char arr[size];
    bool palindrome;
    get_input(arr , size); //or &arr[0]
    print_array(arr, size);
    isPalindrome(arr, size, palindrome);
    display_result(palindrome);
    return 0;
}
