#include<iostream>
using namespace std;
int fact (int n);
int main ()
{

  cout << "fact = " << fact (5) << endl;
  return 0;
}

int fact (int n)
{
  if (n == 0)
    return 1;
  else
    return n * fact (n - 1);
}
