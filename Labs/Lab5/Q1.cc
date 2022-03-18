/*
Write a recursive function to generate the following pattern of stars:
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
Also, write a program that prompts the user to enter the number of lines
in the pattern and uses the recursive function to generate the pattern. For
example, specifying 4 as the number of lines generates the above pattern.
*/
#include <iostream>
using namespace std;
void patternStars (int row, int n)
{

//upper pyramid
  if (row < n)
    {
      for (int space = row; space < n; space++)
	{
	  cout << " "; //printing spase
	}
      for (int i = 1; i <= row; i++)
	{
	  cout << "* ";	//printing stars

	}
      cout << endl; //going to the next row
      patternStars (row + 1, n);
    }
  else
    {
//lower pyramid
      if (n > 0)
	{
	  for (int space = n; space < row; space++)
	    {
	      cout << " "; //printing spase
	    }
	  for (int i = 1; i <= n; i++)
	    {
	      cout << "* "; //printing stars

	    }
	  cout << endl; //going to the next row
	  patternStars (row, n - 1);
	}
  }
}

int main ()
{
    int row = 0; //start with the first row
    int n;
    cout << "Enter n: ";
    cin >> n;
    patternStars (row,n);
    return 0;
}
