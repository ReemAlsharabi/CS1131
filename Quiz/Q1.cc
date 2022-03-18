/*
Write a program that is able to compute some operations on integer numbers. The program should display this menu:
	1. Addition
	2. Multiplication
	3. Subtraction
	4. Division
	5. Modulo
	6. Quit
The program then asks the user to enter two integer numbers. It validates the numbers (the entered numbers should be > 0 and < 100).
The program is executed until the user chooses to quit.
*/
#include <iostream>
using namespace std;
int main()
{
    //declaring variables
    int firstNum, secondNum;
    int operationNum;
    string response;
	//display menu out of the loop to print it once only
    cout<<"operations menu: \n"<<"1. Addition\n2. Multiplication\n3. Subtraction\n4. Division\n5. Modulo\n6. Quit"<<endl;
    //reading the numbers from the user
    cout<<"enter two integer numbers between 0 and 100"<<endl;
    cout<<"first number: "<<endl;
    cin>>firstNum;
    cout<<"second number: "<<endl;
    cin>>secondNum;
	//check if the inputs are valid and start a loop until the user enters valid inputs or quits
    while ((firstNum>100||firstNum<0)||(secondNum>100||secondNum<0))
    {
		cout<<"Numbers you entered are invalid, please enter two integer numbers between 0 and 100 or enter 6 to quit"<<endl;
		cout<<"Enter first number: "<<endl;
		cin>>firstNum;
		cout<<"Enter second number: "<<endl;
		cin>>secondNum;
	}
	//start the operations if the inputs are valid
    if ( (firstNum < 100 && firstNum > 0)&&(secondNum < 100 && secondNum > 0) )
    {  
		cout<<"choose the operation you want to preform from the menu above: "<<endl;
        //we need the program to run at least once, so i will use do while
        do
        {
            //choose the operation
            cin>>operationNum;
            //using switch
            switch(operationNum)
                {
                //addition
                case 1:
                    cout<<"The addition result = "<<firstNum+secondNum<<"\nchoose another operation from the menu above: "<<endl;
                    break;
                case 2:
                    cout<<"The multiplication result = "<<firstNum*secondNum<<"\nchoose another operation from the menu above: "<<endl;
                    break;
                case 3:
                    cout<<"The subtraction result = "<<firstNum-secondNum<<"\nchoose another operation from the menu above: "<<endl;
                    break;
                case 4:
                    cout<<"The division result = "<< firstNum/secondNum <<"\nchoose another operation from the menu above: "<<endl;
                    break;
                case 5:
                    cout<<"The modulo result = "<<firstNum%secondNum<<"\nchoose another operation from the menu above: "<<endl;
                    break;
                }
        } while (operationNum!=6);
    }
	cout << "Thank you for using our program!"<<endl;
}
