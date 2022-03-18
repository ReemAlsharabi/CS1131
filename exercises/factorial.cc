#include<iostream>
using namespace std;
int main()
{
    long fac=1;
    long n;
    cout << "How far should I go? ";
    cin >> n;
    for (int i=1; i <= n; i++)
    {
        fac*=i;
    }
    cout<<fac;
return 0;
}
