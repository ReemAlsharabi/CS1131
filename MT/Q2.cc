/*
Write a function named remove_duplicates which uses an integer array nums sorted in increasing order as input,
and  removes the duplicates numbers from the array such that each unique element appears only once and put the results in a new array called no_duplicates.
The relative order of the elements should be kept the same.
For example, if you have an nums = [0,0,1,2,3,3,3,4,4,5,8,8]
Your function call  remove_duplicates(nums, no_duplicates)
Should put the following values in the array no_duplicates: [0, 1,2,3, 4, 5, 8] (ignoring the duplicates)
You need test your function by calling it in the main function.
*/
#include<iostream>
using namespace std;

void remove_duplicates(int (&nums)[12], int no_duplicates[])
{
    int size = sizeof(nums)/sizeof(nums[0]); //note: passing the array without a reference caused a bug (wrong size)
	int j = 0; //the index of the new aray no_duplicates

	for (int i=0; i < size-1; i++)
    {
        //copy the element if it is not duplicated
        if (nums[i] != nums[i+1])
        {
            // assign element number i in nums to elements number j in no_duplicates
            no_duplicates[j] = nums[i];
            // update j
            j+=1;
        }
    }
    no_duplicates[j] = nums[size-1]; //because of i<size-1 it will not check the last element
}

// Print updated array
void display_no_duplicates(int (&no_duplicates)[7]) //assuming we know the size
{ 

  int new_size = sizeof(no_duplicates)/sizeof(no_duplicates[0]);

  cout << "The new array is: {";
  for (int j=0; j<new_size; j++){
        cout<<no_duplicates[j];
        if (j<new_size-1)
        {
          cout << ", ";
        }
    }
    cout << "}" << endl << "Thank you for using our program :)" << endl;
}

int main()
{
	int nums[] = {0,0,1,2,3,3,3,4,4,5,8,8};
    int no_duplicates[7];
    //call the function
    remove_duplicates(nums, no_duplicates);
    display_no_duplicates(no_duplicates);
	  return 0;
}
