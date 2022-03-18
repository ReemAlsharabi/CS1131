/*
Define a class counterType to implement a counter.
Your class must have a private data member counter of type int and functions to set counter to the value specified by the user, initialize counter to 0,
retrieve the value of counter, and increment and decrement counter by one. The value of  counter must be nonnegative.
*/
#include "counterType.h"
#include <iostream>
using namespace std;
int main()
{

    counterType mycounter;
    int c;

    cout << "Enter a nonnegative number: ";
    cin >> c;
    cout << endl;
    while (c <= 0)
    {
        cout << "please enter valid value: ";
        cin >> c;
        cout << endl;
    }

    mycounter.setcounter(c);
    mycounter.getcounter();
    cout << "increased counter = " << mycounter.increasecounter(c) << endl;
    cout << "decreased counter = " << mycounter.decreasecounter(c) << endl;
    
    return 0;
}
