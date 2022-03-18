#include<iostream>
using namespace std;
int main()
{
    double fac=1;
    double euler=1;
    double n;
    cout << "How far should I go? ";
    cin >> n;
    for (int i=1; i <= n; i++)
    {
        fac*=i;
        euler += (1/fac);
    }
    cout<<"e = "<<euler;
return 0;
}
