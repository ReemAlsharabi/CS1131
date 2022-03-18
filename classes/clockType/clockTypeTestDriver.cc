#include "clockType.h"
#include <iostream>
using namespace std;
int main()
{
    int hrs, min, sec;
    cout << "Enter hrs: ";
    cin >> hrs;
    cout << "Enter min: ";
    cin >> min;
    cout << "Enter sec: ";
    cin >> sec;
    clockType c1, c2(5,6,7), c3;
    c1.displayTime();
    c1.incrementMin();
    return 0;
}
