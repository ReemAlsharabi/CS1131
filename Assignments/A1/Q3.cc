/*
You are given a list of students' names and their test scores. Design an algorithm that does the following:
a. Calculates the average test scores.
b. Determines and prints the names of all the students whose test scores are below the average test score.
c. Determines the highest test score.
d. Prints the names of all the students whose test scores are the same as the highest test score.
(Each of the parts a, b, c, and d must be solved as a subproblem. The main algorithm combines the solutions of the subproblems.) 

Design an algorithm that solves the problem.
Use functions
Implement the algorithm in C++.
*/

#include <iostream>
#include <string>
using namespace std;

//global variables
string students_list[5] = { "Emma", "Luna", "Natalie","Stella","Elena" };
float scores_list[5] = {10,7.5,8,9,10};
int i=0;
int number_of_students = sizeof(students_list) / sizeof(string);
float sum_scores;
float average_score;
float highest_score= scores_list[0];

//a
int find_average_score()
{
    for (i=0;i<number_of_students;i++)
    {
        sum_scores += scores_list[i];
    }
    
    average_score = sum_scores/number_of_students; 
    cout << "the average test scores = "<<average_score<<endl;
    return 0;
}
//b
int find_students_below_average()
{
    for (i=0;i<number_of_students;i++){
        if (scores_list[i]<average_score){
            cout << students_list[i] << " -> " << scores_list[i]<< endl;
        }
    }
    return 0;
}

//c
int find_highest_score()
{
    for (i=0;i<number_of_students;i++){
        if (scores_list[i]>highest_score){
            highest_score = scores_list[i];
            i+=1;
        }
    }
    cout << "The highest score is: "<< highest_score<<endl;
    return 0;
}

//d
int print_students_who_scored_highest_score()
{
    cout << "students whose test scores are the same as the highest test score:"<< endl;
    for (i=0;i<number_of_students;i++){
        if (scores_list[i]==highest_score){
            cout << students_list[i] << endl;
        }
    }
    return 0;
}

// main function
int main()
{
    find_average_score();
    find_students_below_average();
    find_highest_score();
    print_students_who_scored_highest_score();
    return 0;
}
