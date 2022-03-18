#include <iostream>
#include <string>
using namespace std;

int reverseDigit(int&num)
{
    int result;
    while(num!=0)
    {
        result = num % 10;
        num = num / 10;
        cout<<result;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The result is: ";
    reverseDigit(num);
    return 0;
}
