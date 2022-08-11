/******************************************************************************
(Compounding interest calculator) Take a monthly savings amount and calculate 
balance after some number of months with a 5% APY
******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    // Deposit, number of months to accrue, and annual percentage yield
    float deposit, n, apy;

    cout << "Enter the monthly savings amount: ";
    cin >> deposit;
    cout << "Enter number of number of months: ";
    cin >> n;
    cout << "Enter APY: ";
    cin >> apy;

    float p = deposit * n;
    float annual_percentage_rate = apy / 100;   // APY as a percentage
    float t = n / 12;                           // Time in decimal years
    
    float accrued_amount = p * pow(1 + (annual_percentage_rate/n), n * t);

    cout << "After 6 months, account value is $" << fixed << setprecision(2) 
        << accrued_amount << endl; 

    return 0;
}