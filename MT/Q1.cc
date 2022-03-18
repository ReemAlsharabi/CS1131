/*
The cost to become a member of a fitness center is as follows:
(a) the senior citizens discount is 30%;
(b) if the membership is bought and paid for 12 or more months, the discount is 15%;
and (c) if more than
five personal training sessions are bought and paid for, the discount on each session is 20%. 

Write a menu-driven program that determines the cost of a new membership. Your program must contain: 
1.	a function that displays the general information about the fitness center and its charges,
2.	a function to get all the necessary information to determine the membership cost, and 
3.	a function to determine the membership cost. 

Use appropriate parameters to pass information in and out of a function. (Do not use any global variables.)
*/
#include <iostream>
using namespace std;

void display_info()
{
  cout<<"Choose your membership from the following:"<<endl<<"(a) the senior citizens discount is 30%" << endl
  << "(b) if the membership is bought and paid for 12 or more months, the discount is 15%" <<endl
  << "(c) if more than five personal training sessions are bought and paid for, the discount on each session is 20%"<<endl
  << "(d) Exit"<<endl;
}
void get_info(char & choice, int & personal_training_sessions)
{
  cout << "Enter your choice: ";
  cin >> choice;
  if (choice == 'c')
  {
    cout << "how many personal training sessions do you want to buy? ";
    cin >> personal_training_sessions;
  }
}
float determine_membership_cost(char choice , float & cost, int personal_training_sessions){
  switch(choice){
    case 'a':
      cost = cost * 0.70;
      break;
    case 'b':
      cost = cost * 0.85;
      break;
    case 'c':
      if (personal_training_sessions >= 5)
      {
        cost = (cost/personal_training_sessions) * 0.80;
        cout << "for each session: ";
      }
      else
        cout << "You don't have any special offer." << endl;
      break;
    default :
      cout << "You don't have any special offer." << endl;
  }
  return cost;
}
int main()
{
  char choice;
  int personal_training_sessions;
  float cost = 2000.00;
  display_info();
  get_info(choice, personal_training_sessions);
  determine_membership_cost(choice , cost ,personal_training_sessions);
  cout << "The cost is: " << cost << "\nThank you for using our program :)"<<endl;
  return 0;
}
