#include<iostream>
using namespace std;
int main()
{
    double pi = 4;
    double denominator = 3;
    int s = -1;
    long i;
    cout << "How far should I go? ";
    cin >> i;
    for (int j = 0; j <= i; j++)
    {
        pi += 4 / denominator * s;
        denominator += 2;
        s = -s;
    }
    cout << "pi = " << pi;
    return 0;
}
