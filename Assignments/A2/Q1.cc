/*
Omaima opened a coffee shop at the beach and sells coffee in three sizes: small (9 oz), medium (12 oz), and large (15 oz). The cost of one small cup is 16 SAR, one medium cup is 18 SAR, and one large cup is 20 SAR. Write a menu-driven program that will make the coffee shop operational. Your program should allow the user to do the following: 
1.	Buy coffee in any size and in any number of cups.
2.	At any time show the total number of cups of each size sold.
3.	At any time show the total amount of coffee sold.
4.	At any time show the total money made.
Your program should consist of at least the following functions: a function to show the user how to use the program, a function to sell coffee, a function to show the number of cups of each size sold, a function to show the total amount of coffee sold, and a function to show the total money made. Your program should not use any global variables and special values such as coffee cup sizes and cost of a coffee cup must be declared as named constants.

You need to use good naming convention for your functions, use void and return value functions. Your code should be commented and well indented.
*/
#include <iostream>
using namespace std;

// display option menu
void displayMenu()
{
    cout<<"* Welcome to Omaima's Coffee Shop *"<<endl;
    cout<<"Here is a list of options: "<<endl;
    cout<<"(1) Taking orders "<<endl;
    cout<<"(2) Display total number of cups of each size sold"<<endl;
    cout<<"(3) Display the total amount of coffee sold"<<endl;
    cout<<"(4) Display the total money made "<<endl;
    cout<<"(5) Quit "<<endl;
    cout<<"Enter an option number to continue: ";

}
// display the coffee menu with prices
void displayCoffeeMenu()
{
    cout<<"    * Menu *"<<endl;
    cout<<" SIZE \t\t  PRICE"<<endl;
    cout<<"Small(9 oz) \t 16 SAR"<<endl;
    cout<<"Medium(12 oz) \t 18 SAR"<<endl;
    cout<<"Large(15 oz) \t 20 SAR"<<endl;
}

//promts the user the number of cups of each size and calculates the total price of the cups of each size.
int calculatePrice (int&smallQuantity, int&mediumQuantity, int&largeQuantity, float&smallMoney, float&mediumMoney ,float&largeMoney)
{
    //declaring constants
    const float priceSmall = 16;
    const float priceMedium = 18;
    const float priceLarge = 20;

    //declaring variables
    char size , choice;
    int cupsNum;

    cout<<"Are you ready to take the orders (y/n)?"<<endl;
    cin>> choice;

    while (choice == 'y' || choice == 'Y') //while loop for taking orders
    {
        cout<<"Enter the size of coffee ordered ( S - M - L): "<<endl;
        cin>> size;

        while (size != 's' && size !='S' && size != 'm' && size != 'M' && size !='l' && size != 'L') //while loop incase the input was invalid
        {
            cout<<"INVALID INPUT: Please enter a vailid size (S - M - L)"<<endl;
            cin>>size;
        }

    // if statement to determine the size of the cup
        if (size =='s' || size == 'S')
        {
            cout<<"Enter the number of cups ordered: "<<endl;
            cin>>cupsNum;

            smallMoney = smallMoney + (priceSmall * cupsNum);
            smallQuantity += cupsNum;

        }
        else if (size=='m' || size == 'M')
        {
            cout<<"Enter the number of cups ordered: "<<endl;
            cin>>cupsNum;

            mediumMoney = mediumMoney +(priceMedium *cupsNum);
            mediumQuantity += cupsNum;

        }
        else if (size=='l' || size == 'L')
        {
            cout<<"Enter the number of cups ordered: "<<endl;
            cin>>cupsNum;

            largeMoney = largeMoney + (priceLarge *cupsNum);
            largeQuantity += cupsNum;

        }

        cout<<"Do you want to add another item to the order? (y/n) "<<endl;
        cin>>choice;
    }

return 0;
}

// this function shows the number of cups of each size sold

int  calculateCupsSold (int & smallCups, int & mediumCups, int & largeCups)
{
    int totalCups = smallCups + mediumCups + largeCups;

    cout<<"The total number of small cups sold: "<<smallCups<<endl;
    cout<<"The total number of medium cups sold: "<<mediumCups<<endl;
    cout<<"The total number of large cups sold: "<<largeCups<<endl;
    cout<<endl<<endl;

    return totalCups;
}


int calculateAmountSold (int & smallCups, int & mediumCups, int & largeCups)
{
    // declaring constants for cups amount
    const int amountSmall =  9;
    const int amountMedium = 12;
    const int amountLarge = 15;

    int amountTotal;

    amountTotal = (smallCups * amountSmall) + (mediumCups * amountMedium) + (largeCups * amountLarge);
    cout<<"Total amount of coffee sold: "<<amountTotal<<" oz"<<endl;
    cout<<endl<<endl;
    return amountTotal;

}


float calculateMoney (float & totalMoney, float smallMoney, float mediumMoney, float largeMoney)
{
    // calculating the total money made
    totalMoney = smallMoney + mediumMoney +largeMoney;
    cout<< "Total money made: "<<totalMoney<<" SAR"<<endl;
    cout<<endl<<endl;
    return totalMoney;
}

int main()
{
    //declaring variables
    int smallQuantity, mediumQuantity, largeQuantity;
    float totalMoney, mediumMoney, smallMoney, largeMoney;
    float priceSmall=16 , priceLarge=20 , priceMedium=18;
    int smallCups=0, mediumCups=0, largeCups=0;
    char option;

    //initialize values to 0
    totalMoney = 0.0;
    smallMoney = 0.0;
    mediumMoney = 0.0;
    largeMoney = 0.0;

    smallQuantity = 0;
    mediumQuantity = 0;
    largeQuantity = 0;

    displayMenu();
    cin>>option;
    cout<<endl;

    while (option != '5'){ // while loop for the options

        if (option == '1')
        {
            displayCoffeeMenu();
            cout<<endl;
            calculatePrice (smallCups, mediumCups, largeCups, mediumMoney, smallMoney, largeMoney);
        }
        else if (option == '2')
             calculateCupsSold (smallCups, mediumCups, largeCups);
        else if (option == '3')
            calculateAmountSold ( smallCups, mediumCups, largeCups);
        else if (option == '4')
            calculateMoney( totalMoney, smallMoney, mediumMoney, largeMoney);
        else
            cout<<"INVALID OPTION: Enter a number within the range (1-5)"<<endl;

        displayMenu();
        cin>>option;
        cout<<endl;

    }
   return 0 ;
}
