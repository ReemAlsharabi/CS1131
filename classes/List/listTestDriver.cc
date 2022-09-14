#include "list.h"
#include <iostream>
using namespace std;
int main()
{
    list mylist;
    int myLength;
    mylist.setLength(1000);
    myLength = mylist.getLength();
    mylist.insert(1);
    mylist.insert(2);
    mylist.search(6);
    mylist.remove(2);
    return 0;
}
