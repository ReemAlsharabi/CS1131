#include<iostream>
using namespace std;
int main()
{
    double pi = 0;
    double n = 1;
    long i;
    cout << "How far should I go? ";
    cin >> i;
    for (int j = 0; j <= i; j++)
    {
        if (j%2 == 0)
            pi = pi + (1/n);
        else
            pi = pi - (1/n);
        n +=2;
    }
    pi *=4;
    cout << "pi = " << pi;
    return 0;
}
