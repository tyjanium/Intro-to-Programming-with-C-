/******************************************************************************
(Financial application: Monetary units) Write a program tha prompts the user
to enter an amount of money such as 11.56. Return how many whole dollars, 
quarters, dimes, nickels, and pennies. 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    // Receive the amount
    cout << "Enter the amount in double, for example 11.56: ";
    double amount;
    cin >> amount;

    int remaining_amount = static_cast<int>(amount * 100);

    // Find the number of dollars
    int number_of_dollars = remaining_amount / 100;
    remaining_amount = remaining_amount % 100;

    // Find number of quarters in remaining amount
    int number_of_quarters = remaining_amount / 25;
    remaining_amount = remaining_amount % 25;

    // Find the number of dimes in remaining amount
    int number_of_dimes = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;

    // Find the number of nickels in remaining amount
    int number_of_nickels = remaining_amount / 5;
    remaining_amount = remaining_amount % 5;

    // Find the number of pennies in remaining amount
    int number_of_pennies = remaining_amount;

    // Display results
    if (number_of_dollars > 0){
        if (number_of_dollars == 1)
            cout << number_of_dollars << " dollar" << endl;
        else
            cout << number_of_dollars << " dollars" << endl;
    }

    if (number_of_quarters > 0){
        if (number_of_quarters == 1)
            cout << number_of_quarters << " quarter" << endl;
        else
            cout << number_of_quarters << " quarters" << endl;
    }

    if (number_of_dimes > 0){
        if (number_of_dimes == 1)
            cout << number_of_dimes << " dime" << endl;
        else
            cout << number_of_dimes << " dimes" << endl;
    }

    if (number_of_nickels > 0){
        if (number_of_nickels == 1)
            cout << number_of_nickels << " nickel" << endl;
        else
            cout << number_of_nickels << " nickels" << endl;
    }

    if (number_of_pennies > 0){
        if (number_of_pennies == 1)
            cout << number_of_pennies << " penny" << endl;
        else
            cout << number_of_pennies << " pennies" << endl;
    }
            
    return 0;
}