/******************************************************************************
(Future Investment Value) Write a program that reads in investment amount, 
APR, and number of years then returns the investment valu.
******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    
    double present_value, APR, years;

    cout << "Enter investment amount: ";
    cin >> present_value;
    cout << "Enter APR in percentage: ";
    cin >> APR;
    cout << "Enter number of years: ";
    cin >> years;

    double monthly_interest_rate = APR / 1200;
    double future_value = present_value * 
        pow(1 + monthly_interest_rate, years * 12);

    cout << "Accumulated value is $" << fixed << setprecision(2) 
        << future_value << endl;

    return 0;
}