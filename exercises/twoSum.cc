#include <iostream>
using namespace std;

int twoSum(int (&nums)[4], int target)
{
    
    int size = sizeof(nums)/sizeof(nums[0]);
    int i = -1;
    int j;
    bool found=false;
    
    while(i < size && found == false)
    {
    i++;
    j = i + 1;
        while (j < size && found == false)
        {
            if((nums[i] + nums[j]) == target)
                found = true;
            else
            {
                found = false;
                j++;
            }
        }
    }
    if (found==true)
    {
        cout <<"["<< i << ", "<< j <<"]"<<endl;
        cout << nums[i]<<" + "<<nums[j]<< " = "<<target << endl;
    }
    else
        cout << "Not found" << endl;
    
    return 0;
}

int main()
{
    int nums[] = {2,5,5,11};
    int target = 10;
    twoSum(nums,target);
    
    return 0;

}
