/******************************************************************************
(Financials: currency exchange) Write a program that prompts the user to enter
the exchange rate from currency in U.S. dollars to Chinese RMB. Prompt the
user to enter 0 to convert from dollars to RMB and 1 to convert from RMB to
dollars. Prompt the user to enter the amount in dollars or RMB to convert to
RMB or dollars, respectively.
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float exchange_rate, dollars, RMB;
    int conversion;
    
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchange_rate; 

    cout << "Enter 0 to convert dollars to RMB and 1 vive versa: ";
    cin >> conversion;

    if (conversion == 0){
        cout << "Enter the dollar amount: ";
        cin >> dollars;

        // Convert dollars to yuan
        RMB = dollars * exchange_rate;

        cout << "$" << dollars << " is " << RMB << " yuan" << endl;
    }
        
    else if (conversion == 1){
        cout << "Enter the RMB amount: ";
        cin >> RMB;

        // Convert yuan to dollars
        dollars = RMB / exchange_rate;

        cout << RMB << " yuan is $" << fixed << setprecision(2) 
            << dollars << endl;
    }

    else {
        cout << "Invalid Input" << endl;
    }
    
    return 0;
}