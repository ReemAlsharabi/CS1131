#include <iostream>
#include <string>
using namespace std;
void search(char (&arr)[4], char search_for, int & i, bool & found)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    found=false;
    for (i=0; i<size; i++)
    {
        if (arr[i]==search_for)
        {
            found=true;
            break;
        }
    }
}
void display_result(bool found, int i)
{
    if (found)
        cout<<"found in index: "<<i<<endl;
    else
        cout << "Not found";
}
int main()
{
    char arr[]={'E','E','H','M'};
    char search_for;
    bool found;
    int i;
    cout << "Enter the character you want to search for: ";
    cin>>search_for;
    search(arr, search_for, i, found);
    display_result(found, i);
    return 0;
}
