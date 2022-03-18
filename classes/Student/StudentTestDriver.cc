#include <iostream>
#include "Student.h"
#include <string>
using namespace std;

int main()
{
    Student EffatS[3];
    string name;
    for (int i=0; i<3; i++)
    {
        cout << "Enter name: ";
        cin >> name;
        EffatS[i].setName(name); //bug for saying EffatS.setName(name); (without [i])
        cout << "\nStudent " << i+1 << " is: " << EffatS[i].getName();
        cout << endl;
    }    

    return 0;
}