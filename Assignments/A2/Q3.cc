/*
(Greatest Common Divisor) Given two integers x and y, the following recursive definition determines the greatest common divisor of x and y, written gcd(x,y):

gcd(x, y) = 
x, if y = 0
gcd(y, x%y), if y != 0

Note: In this definition, % is the mod operator.
Write a recursive function, gcd, that takes as parameters two integers and returns the greatest common divisor of the numbers.
Also, write a program to test your function.
*/
#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    if (y==0)
        return x;
    else
        return gcd(y, x%y);
}
int main ()
{
    int x,y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "\nEnter the secind number: ";
    cin >> y;
    cout << "\nThe greatest common divisor of the numbers entered = " << gcd(x,y);
    return 0;
}
