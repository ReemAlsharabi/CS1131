#include <iostream>
using namespace std;
void find_largest(int (&arr)[7], int & largest)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    largest = arr[i];
    while(i<size-1)
    {
        
        if (arr[i+1] > largest)
            largest = arr[i+1];
    
        i++;
        
    }
    
}

int main()
{
    int arr[]={3,5,7,1,8,-1,6};
    int largest;
    find_largest(arr, largest);
    cout << "Largest = " << largest << endl;
    return 0;
}
