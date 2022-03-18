#include <iostream>
using namespace std;
int sum(int num)
{
    if (num==0)
        return 0;
    else
        return num + sum(num-1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<"sum = "<<sum(num)<<endl;
    
    return 0;
}
