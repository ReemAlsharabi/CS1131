/*
A student spends a majority of his weekend playing and watching sports, thereby tiring him out and leading him to oversleep and often miss his Monday 8 AM math class.
Suppose that the tuition per semester is $25,000 and the average semester consists of 15 units. If the math class meets three days a week,
one hour each day for 15 weeks, and is a four-unit course, how much does each hour of math class cost the student? 
Design an algorithm that solves the problem.
Implement the algorithm in C++.
*/
#include <iostream>
using namespace std;
int main()
{
    //declaring constants
    const int TUITION_FEES = 25000;
    const int UNITS_PER_SEMESTER = 15;
    const int MATH_UNITS = 4;
    const int MATH_WEEKS = 15;
    const int MATH_HOUR_PER_WEEK = 3;
    //declaring variables
    float fees_per_unit = 0;
    float math_hours = 0;
    float math_cost = 0;
    //calculating fees per unit
    fees_per_unit = TUITION_FEES / UNITS_PER_SEMESTER;
    //calculating total math hours
    math_hours =  (MATH_HOUR_PER_WEEK* MATH_WEEKS)/MATH_UNITS;
    //calculating math cost per hour
    math_cost = fees_per_unit/ math_hours;
    //printing out math cost per hour
    cout << "each hour of math class costs $" << math_cost;
    return 0;
}
