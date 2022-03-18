/*
(Line and letter count) Let us now write a program that reads a given text,
outputs the text as is, and also prints the number of lines and the number of times each letter appears in the text. An uppercase letter and a lowercase letter
are treated as being the same; that is, they are tallied together. Because there are 26 letters, we use an array of 26 components to perform the letter count.
We also need a variable to store the line count.
The text is stored in a file, which we will call textin.txt. The output will be stored in a file, which we will call textout.out.

Input A file containing the text to be processed.
Output A file containing the text, number of lines, and the number of times a letter appears in the text.

PROBLEM ANALYSIS AND ALGORITHM DESIGN
Based on the desired output, it is clear that we must output the text as is. That is, if the text contains any whitespace characters, they must be output as well. Furthermore, we must count the number of lines in the text. Therefore, we must know where the line ends, which means that we must trap the newline character. This requirement suggests that we cannot use the extraction operator to process the input file. Because we also need to perform the letter count, we use the get function to read the text. 

*/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);
int main()
{
	//Step 1; Declare variables
	int lineCount;
	int letterCount[26];
	char ch;
	ifstream infile;
	ofstream outfile;
	infile.open("textin.txt"); //Step 2
	if (!infile) //Step 3
	{
		cout << "Cannot open the input file."<< endl;
		return 1;
	}

	outfile.open("textout.out"); //Step 4
	initialize(lineCount, letterCount); //Step 5
	infile.get(ch); //Step 6
	 
	while (!infile.eof()) //Step 7
	{
		copyText(infile, outfile, ch, letterCount); //Step 7.1
		lineCount++; //Step 7.2
		infile.get(ch); //Step 7.3
	}
	writeTotal(outfile, lineCount, letterCount); //Step 8
	infile.close(); //Step 9
	outfile.close(); //Step 9
	return 0;
}

void initialize(int& lc, int list[])
{
	lc = 0;
	for (int j = 0; j < 26; j++)
	list[j] = 0;
} //end initialize

void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
{
	while (ch != '\n') //process the entire line
	{
		outtext << ch; //output the character
		characterCount(ch, list); //call the function
		//character count
		intext.get(ch); //read the next character
	}
	outtext << ch; //output the newline character
} //end copyText

void characterCount(char ch, int list[])
{
	int index;
	ch = toupper(ch); //Step a
	index = static_cast<int>(ch)- static_cast<int>('A'); //Step b
	if (0 <= index && index < 26) //Step c
		list[index]++;
} //end characterCount

void writeTotal(ofstream& outtext, int lc, int list[])
{
	outtext << endl;
	outtext << "The number of lines = " << lc << endl;
	for (int index = 0; index < 26; index++)
		outtext << static_cast<char>( index+ static_cast<int>('A'))<< " count = " << list[index] << endl;
} //end writeTotal
