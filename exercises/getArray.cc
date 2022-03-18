#include <iostream>
#include <string>
using namespace std;


int main()
{
    
    int n;
    cout<<"Enter n: ";
    cin >> n;
    
    if (n>0)
    {
        string arr[n];
        cout << "Enter elements: "<<endl;
        for (int i=0; i<n; i++)
        {
            cout<<i+1<<": ";
            cin >> arr[i];
        }
        cout << "your array: {";
        for (int i=0; i<n; i++)
        {
            cout<<arr[i];
            if (i<n-1)
                cout<<", ";
        }
        cout<<"}"<<endl;
        
    }
    else
        cout<< "invalid input";
    return 0;
}
