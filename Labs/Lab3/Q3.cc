/*
The following program takes a course score (a value between 0 and 100) and determines a student’s course grade. This program has three functions: main, getScore, and printGrade, as follows:
a.	main
	a.	Get the course score.
	b.	Print the course grade.
b.	getScore
	a.	Prompt the user for the input.
	b.	Get the input.
	c.	Print the course score.
c.	printGrade
	a.	Calculate the course grade.
	b.	Print the course grade.

*	Type the code in your text editor
*	Run the program 
*	Fix the program based on the problem description given in the questions
*	Run the code using a makefile
*	Submit the source code in addition to the makefile
*	Submit a well formatted report
*/
#include <iostream>
#include <string>
using namespace std;
int getScore(int& score);
int printGrade(int score);

int main()
{
	int course_score;
	getScore(course_score);
	printGrade(course_score);
	return 0;
}
int getScore(int& score)
{
	cout<<"Enter the course score: ";
	cin>>score;
	if (score>100 || score<0)
	{
		cout<<"Enter a value between 0 and 100 for the course score: ";
		cin>>score;
	}
	cout<<"You entered: "<<score<<endl;
	return 0;
}
int printGrade(int finalScore)
{
	string course_grade;
	if (finalScore>=95)
		course_grade="A+";
	else if (finalScore>=90)
		course_grade="A";
	else if (finalScore>=85)
		course_grade="B+";
	else if (finalScore>=80)
		course_grade="B";
	else if (finalScore>=75)
		course_grade="C+";
	else if (finalScore>=70)
		course_grade="C";
	else if (finalScore>=65)
		course_grade="D+";
	else if (finalScore>=60)
		course_grade="D";
	else 
		course_grade="F";
	cout<<"\n course grade is: "<<course_grade<<endl;
	return 0;
}
