#include <iostream>
using namespace std;
void find_largest_and_smallest(int (&arr)[5], int & largest, int & smallest)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    largest = arr[i];
    smallest = arr[i];
    while(i<size-1){
        if (arr[i+1] > largest){
            largest = arr[i+1];
        }
        if (arr[i+1] < smallest){
            smallest = arr[i+1];
        }
        i++;
    }
}

int find_delta(int largest, int smallest)
{
    int delta;
    delta = largest - smallest;
    return delta;
}
int main()
{
    int arr[]={3,5,7,1,8};
    int largest, smallest;
    find_largest_and_smallest(arr, largest, smallest);
    int delta = find_delta(largest, smallest);
    cout << "Delta = " << delta << endl;
    return 0;
}
