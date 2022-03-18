/*
The following program is supposed to read the length and width of a rectangle from a file named input.txt 
and write the area and perimeter of the numbers to a file named output.txt. 
However, it fails to do so. Rewrite the program so that it accomplishes what it is intended to do.
(Also, include statements to close the files.)
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	// declare variables
	double length, width;
	// declare file stream variables
	ifstream infile;
	ofstream outfile;
	
	// open the files
	infile.open("input.txt");
	outfile.open("output.txt");
	
	infile >> length >> width;
	outfile << "Area = " << length * width << ", Perimeter = " << 2 * (length + width) << endl;
	
	// Close the files
	infile.close();
	outfile.close();
	
	return 0;
}
