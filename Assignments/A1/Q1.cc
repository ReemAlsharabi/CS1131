/*
An ATM allows a customer to withdraw a maximum of $500 per day. If a customer withdraws more than $300, the service charge is 4% of the amount over $300.
If the customer does not have sufficient money in the account, the ATM informs the customer about the insufficient funds and gives the customer the option
to withdraw the money for a service charge of $25.00. If there is no money in the account or if the account balance is negative, the ATM does not allow the customer to
withdraw any money. If the amount to be withdrawn is greater than $500, the ATM informs the customer about the maximum amount that can be withdrawn. 

Write an algorithm that allows the customer to enter the amount to be withdrawn.
The algorithm then checks the total amount in the account, dispenses the money to the customer,
and debits the account by the amount withdrawn and the service charges, if any. 
*/
#include <iostream>
using namespace std;
int main()
{
    //declaring constants
    const int MAX_WITHDRAW_AMOUNT = 500;
    const int WITHDRAW_AMOUNT_GETS_SERVICE_CHARGE = 300;
    const float WITHDRAW_SERVICE_CHARGE = 0.04;
    const int INSUFFICIENCY_SERVICE_CHARGE = 25;
    
    //declaring variables
    float account_balance = 100.00f;
    float withdrawn_amount = 0.0f;
    float dispensed_amount = 0.0f;
    int response;
    
    //gettin withdrawn amount from the customer
    cout << "amount you want to withdraw: $";
    cin >> withdrawn_amount;

    //check if the ATM will allow the withaw 
    if (account_balance > 0){
        // chack if the withdraw amount does not exceed max amount
        if (withdrawn_amount<= MAX_WITHDRAW_AMOUNT){
            // check if there is enough money in the account
            if (account_balance >= withdrawn_amount){
                // check if the withdraw amount gets service charge
                if (withdrawn_amount < WITHDRAW_AMOUNT_GETS_SERVICE_CHARGE){
                    dispensed_amount = withdrawn_amount;
                    account_balance = account_balance - dispensed_amount;
                } 
                else
                {
                    dispensed_amount = withdrawn_amount;
                    account_balance = account_balance - (dispensed_amount+((withdrawn_amount - WITHDRAW_AMOUNT_GETS_SERVICE_CHARGE) * WITHDRAW_SERVICE_CHARGE));
                }
            }
            else
            {
                cout<<"insufficient funds. \nYou can withdraw the money for a service charge of $25.00 \nWould you like to continue? \nEnter 1 or 0:\n";
                cin>> response;
                // check customer response
                if (response==1)
                {
                    if (withdrawn_amount > WITHDRAW_AMOUNT_GETS_SERVICE_CHARGE)
                    {
                        dispensed_amount = withdrawn_amount;
                        account_balance = account_balance - ((dispensed_amount + INSUFFICIENCY_SERVICE_CHARGE)+((dispensed_amount - WITHDRAW_AMOUNT_GETS_SERVICE_CHARGE) * WITHDRAW_SERVICE_CHARGE));

                    }
                    else
                    {
                        dispensed_amount = withdrawn_amount;
                        account_balance = account_balance - (dispensed_amount + INSUFFICIENCY_SERVICE_CHARGE);
                    }
                }
                else if (response==0)
                    cout<< "operation cancelled sucssefully" << endl;
                else
                    cout<<"invalid response"<< endl;
            }
        } else
            cout << "The maximum amount that can be withdrawn is $500" << endl;
    } else
        cout << "you are not allowed to withdraw any money" << endl;

    cout << "dispensed amount is $" << dispensed_amount <<"\ncurrent account balance: $" << account_balance << endl;
    
    return 0;
}
