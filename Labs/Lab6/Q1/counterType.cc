/*
Define a class counterType to implement a counter.
Your class must have a private data member counter of type int and functions to set counter to the value specified by the user, initialize counter to 0,
retrieve the value of counter, and increment and decrement counter by one. The value of  counter must be nonnegative.
*/
#include "counterType.h"
#include <iostream>
using namespace std;

counterType::counterType()
{
    counter = 0;
}
int counterType::increasecounter(int counter)
{
    counter+=1;
    return counter;
}
int counterType::decreasecounter(int counter)
{
    counter-=1;
    return counter;
}
void counterType::setcounter(int c)
{
    counter = c;
}
int counterType::getcounter()
{
    return counter;
}
