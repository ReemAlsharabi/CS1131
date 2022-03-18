/*
(Airplane Seating Assignment) Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with six seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are economy class. Your program must prompt the user to enter the following information:
1.	Ticket type (first class, business class, or economy class)
2.	Desired seat
*/
#include <iostream>
#include <string>
using namespace std;
//function to create all occupied and available seats
void set_seats(int row_num, int column_num, char (&arr)[13][7])
{
    //setting all seats to be available
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < column_num; j++)
        {
            arr[i][j] = '*';
        }
    }
    //occupied seats that cannot be chosen
    arr[0][2]='X';
    arr[0][4]='X';
    arr[1][3]='X';
    arr[1][5]='X';
    arr[4][1]='X';
    arr[4][3]='X';
    arr[5][1]='X';
    arr[5][5]='X';
    arr[11][2]='X';
}

//function to display the seats that the passenger will choose from
void display_current_seats(int row_num, int column_num, const char arr[13][7])
{
    cout << "The symbol * indicates that the seat is available; X indicates that the seat is occupied.\n"<<endl;
    cout << "\tA\tB\tC\tD\tE\tF"<<endl;
    //displaying the array
    for (int i = 0; i < row_num; i++)
    {
        cout << "Row " << i+1 << "\t";
        for (int j = 0; j < column_num-1; j++)
            cout << arr[i][j] <<"\t";
        cout << endl;
    }
}

//function to get the wanted seat information from the passenger
void get_inputs(int class_choice, int&chosen_row, char chosen_column, int&chosen_column_num, bool&valid_row_choise, bool&valid_choise, char (&arr)[13][7])
{
    //getting inputs
    cout << "You want to sit in:\n1- First class.\n2- Business class.\n3- Economy class." << endl;
    cin >> class_choice;
    switch (class_choice)
    {
        //if the passenger wantts to sit in the first class
        case 1:
        {
            cout << "Choose a row between rows 1 and 2: ";
            cin >> chosen_row;
            if (chosen_row < 1 || chosen_row > 2)
            {
                cout << "You cannot set in row " << chosen_row << endl;
                valid_row_choise = false;
                break;
            }
            break;
        }
        //if the passenger wantts to sit in the business class
        case 2:
        {
            cout << "Choose a row between rows 3 and 7: ";
            cin >> chosen_row;
            if (chosen_row < 3 || chosen_row > 7)
            {
                cout << "You cannot set in row " << chosen_row << endl;
                valid_row_choise = false;
                break;
            }
            break;
        }
        //if the passenger wantts to sit in the economy class
        case 3:
        {
            cout << "Choose a row between rows 8 and 13: ";
            cin >> chosen_row;
            if (chosen_row < 8 || chosen_row > 13)
            {
                cout << "You cannot set in row " << chosen_row << endl;
                valid_row_choise = false;
                break;
            }
            break;
        }
    }
    //choosing the column
    if (valid_row_choise) //if the passenger chooses the correct row, let them choose a column
    {
        cout << "Choose the column: ";
        cin >> chosen_column;
        chosen_column = toupper(chosen_column);
        switch (chosen_column)
        {
            case 'A':
                chosen_column_num = 0;
                break;
            case 'B':
                chosen_column_num = 1;
                break;
            case 'C':
                chosen_column_num = 2;
                break;
            case 'D':
                chosen_column_num = 3;
                break;
            case 'E':
                chosen_column_num = 4;
                break;
            case 'F':
                chosen_column_num = 5;
                break;
        }
        //check if the seat is available
        if (arr[chosen_row-1][chosen_column_num] == 'X') //if the seat is occupied
        {
            cout << "This seat is occupied." << endl;
            valid_choise = false;
        }
        else //the seat is available
        {
            valid_choise = true;
            arr[chosen_row-1][chosen_column_num] = 'X'; //make the seat occupied
        }

    }
}

//display the seats after the passenger chooses their seat
void display_final_seats(int row_num, int column_num, bool valid_row_choise, bool valid_choise, char (&arr)[13][7])
{
    //displaying the array
    if (valid_choise && valid_row_choise)
    {
        cout << "\tA\tB\tC\tD\tE\tF"<<endl;
        for (int i = 0; i < row_num; i++)
        {
            cout << "Row " << i+1;
            cout << "\t";
            for (int j = 0; j < column_num-1; j++)
            {
                cout << arr[i][j] <<"\t";
            }
            cout << endl;
        }
    }
}


int main()
{
    //variables declaration and initialization
    int class_choice;
    int row_num = 13;
    int column_num = 7;
    int chosen_column_num; //extra column for the rows numbers (Row i+1)
    char chosen_column;
    int chosen_row;
    bool valid_choise = true;
    bool valid_row_choise = true;
    char arr[13][7];

    //calling the functions
    set_seats(row_num, column_num, arr);
    display_current_seats(row_num, column_num, arr);
    get_inputs(class_choice, chosen_row, chosen_column, chosen_column_num, valid_row_choise, valid_choise, arr);
    display_final_seats(row_num, column_num, valid_row_choise, valid_choise, arr);

    return 0;
}
