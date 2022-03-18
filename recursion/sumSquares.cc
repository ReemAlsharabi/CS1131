#include <iostream>
using namespace std;
int sumSquares(int num)
{
    if (num==0)
        return 0;
    else
        return (num*num)+sumSquares(num-1);
}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<"Result = "<<sumSquares(num)<<endl;
    
    return 0;
}
