/******************************************************************************
(Monetary Units) Enter a monetary value such as "1156", where the first two
digits represent $11, and the last two digits represent $0.56. Compute the 
number of dollars, quarters, dimes, nickels, pennies.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int amount;
    
    cout << "Enter an amount as an integer, for example 1156, " << endl;
    cout << "were it represents $11.56: ";
    cin >> amount;

    int remaining_amount;

    // Calculate whole dollars
    int dollars = amount / 100;
    remaining_amount = amount % 100;

    // Calculate quarters
    int quarters = remaining_amount / 25;
    remaining_amount = remaining_amount % 25;

    // Calculate dimes
    int dimes = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;

    // Calculate nickels
    int nickels = remaining_amount / 5;
    remaining_amount = remaining_amount % 5;

    // Calculate pennies
    int pennies = remaining_amount;

    cout << "Your amount " << amount << " consists of " << endl <<
        " " << dollars << " dollars " << endl <<
        " " << quarters << " quarters " << endl <<
        " " << dimes << " dimes " << endl <<
        " " << nickels << " nickels " << endl <<
        " " << pennies << " pennies " << endl;

    return 0;
}