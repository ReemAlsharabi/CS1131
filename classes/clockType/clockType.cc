#include "clockType.h"
#include <iostream>
using namespace std;
void clockType::setTime(int h, int m, int s)
{
    hrs = h;
    min = m;
    sec = s;
}
void clockType::getTime(int& h, int& m, int& s)
{
    h = hrs;
    m = min;
    s = sec;
}
void clockType::incrementHrs()
{
    hrs++;
    if (hrs>23)
        hrs = 0;
}
void clockType::incrementMin()
{
    min++;
    if (min>59)
    {
        min = 0;
        incrementHrs(); //use clockType::??
    }
}
void clockType::incrementSec()
{
    sec++;
    if (sec>59)
    {
        sec = 0;
        incrementMin(); //use clockType::??
    }
}
void clockType::displayTime()
{
    cout << hrs << " : " << min << " : " << sec << endl;
}
clockType::clockType() //default constructor
{
    hrs = 0;
    min = 0;
    sec = 0;
}
clockType::clockType(int h, int m, int s) //overloaded constructor
{
    hrs = h;
    min = m;
    sec = s;
}
//bool clockType::isEqual(clockType& );
