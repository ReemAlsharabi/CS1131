/*
Use only one array; function call to remove_duplicates(nums) should do the following:
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums.
More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result.
It does not matter what you leave beyond the first k elements.
*/
#include<iostream>
using namespace std;
int remove_duplicates(int (&nums)[12])
{
    int size = sizeof(nums) / sizeof(nums[0]); //first bug solved by passing by reference
    cout<<"size: "<<size<<endl;
    int j = 0;
    for (int i=0; i < size-1; i++)
    {
        if (nums[i] != nums[i+1])
        {
            nums[j] = nums[i];
            j++; //j is increasing each time we find a new element
            //j=6
        }
    }
    nums[j+1] = nums[size-1]; //because of i<size-1 it will not check the last element
    return j; //because we need the new size and we should't use the parameter "size"
}

int main()
{
    int nums[] = {0,0,1,2,3,3,3,4,4,5,8,8};
    int newSize = remove_duplicates(nums);
    cout << "The new array is: {";
    for (int i=0; i<newSize; i++){
        cout<<nums[i];
        if (i<newSize-1)
        {
          cout<<", ";
        }
    }
    cout<<"}"<<endl<<"Thank you for using our program :)"<<endl;
          return 0;
}
