#include <iostream>
using namespace std;
void find_smallest(int (&arr)[7], int & smallest)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    smallest = arr[i];
    while(i<size-1)
    {
        
        if (arr[i+1] < smallest)
        {
            smallest = arr[i+1];
        }
        i++;
        
    }
    
}

int main()
{
    int arr[]={3,5,7,1,8,-1,6};
    int smallest;
    find_smallest(arr, smallest);
    cout << "Smallest = " << smallest << endl;
    return 0;
}
