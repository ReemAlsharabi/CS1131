/*
Write a program to convert the time from 24-hour notation to 12-hour notation and vice versa. Your program must be menu driven, giving the user the choice of converting the time between the two notations. Furthermore, your program must contain at least the following functions:
*	a function to convert the time from 24-hour notation to 12-hour notation, 
*	a function to convert the time from 12-hour notation to 24-hour notation, 
*	a function to display the choices,
*	function(s) to get the input, 
*	and function(s) to display the results. (For 12-hour time notation, your program must display AM or PM.)
*/
#include <string>
#include <iostream>
using namespace std;

// this is the constant 12 which we will use as the conversion factor
const int CONVERTION_FACTOR = 12;

// function to display the choices menu, it is type void and it doesn't return any value
void display_choice_menu()
{
    cout << "1. Convert from 24-hour to 12-hour notation" << endl;
    cout << "2. Convert from 12-hour to 24-hour notation" << endl;
    cout << "3. Exit" << endl;
}
// function to get the choice from the user and then choose the conversion function depending on the choice here
int get_choice(int &choice)
{
    cin>>choice;
    return choice;
}

// getting  the inputs for conversion to 12
void get_inputs_convert_to_12(int &hours, int &minutes, int &seconds)
{
    cout<<"Enter the hours: ";
    cin>>hours;
    cout<<"Enter the minutes: ";
    cin>>minutes;
    cout<<"Enter the seconds: ";
    cin>>seconds;
}

// getting  the inputs for conversion to 24
void get_inputs_convert_to_24(int &hours, int &minutes, int &seconds, string &am_pm)
{
    cout<<"Enter the hours: ";
    cin>>hours;
    cout<<"Enter the minutes: ";
    cin>>minutes;
    cout<<"Enter the seconds: ";
    cin>>seconds;
    cout<<"answer the question: am or pm? ";
    cin>> am_pm;
}

// converting to 12
void convert_to_12(int& hours, int&minutes, int&seconds, string &am_pm, bool&valid)
{
    valid = true; //boolean to validate the inputs

    get_inputs_convert_to_12(hours, minutes, seconds); //calling the inputs function for conversion to 12

    //converting depending on the input
    if (hours == 0 || hours == 00)
    {
        hours = hours + 12;
        am_pm="am";
    }
    else if(hours == 12)
    {
        hours = hours;
        am_pm="pm";
    }
    else if(hours < 12 && hours > 0)
    {
        hours = hours;
        am_pm="am";
    }
    else if (hours > 12 && hours < 24)
    {
        hours = hours - 12;
        am_pm="pm";
    }

    //validate the inputs
    else
      valid = false;
}

// converting to 21
void convert_to_24(int& hours, int&minutes, int&seconds, bool&valid)
{
    string am_pm;

    valid = true; //boolean to validate the inputs

    get_inputs_convert_to_24(hours, minutes, seconds, am_pm); //calling the inputs function for conversion to 24

    //converting depending on the input
    if(hours == 12 && am_pm=="am")
        hours = 0;
    else if(hours == 12 && am_pm=="pm")
        hours = CONVERTION_FACTOR;

    else if (hours < 12 && hours > 0 && am_pm=="am")
        hours = hours;
    else if (hours < 12 && hours > 0 && am_pm=="pm")
        hours+=CONVERTION_FACTOR;

    //validate the inputs
    else
        valid = false;
}

//function to display the results
void display_results()
{
    int choice, hours, minutes, seconds;
    string am_pm;
    bool valid;

    get_choice(choice); //calling the choice function

    //decide which conversion function we should use
    if (choice==1)
        convert_to_12(hours, minutes, seconds, am_pm, valid);
    else if (choice==2)//
        convert_to_24(hours, minutes, seconds, valid);

    //validating the inputs
    if (valid==true)
    //print the output if the inputs are valid
        cout<<"Time after conversion  is: \n"<<hours<<":"<<minutes<<":"<<seconds<<" "<<am_pm
        <<"\nThank you for using our program :)"<<endl;
    //print invalid if the inputs aren't valid
    else
        cout<<"invalid input"<<endl;
}

int main()
{
    //calling the function to display the choices
    display_choice_menu();
    //calling the display results function (the other functions will be called inside this function)
    display_results();
    return 0;
}
