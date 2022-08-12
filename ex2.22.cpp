/******************************************************************************
(Calculate Interest) Write a program that reads the balance and the APR and 
displays the interest for the next month.
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double balance; 
    float APR;
    
    cout << "Enter the balance and interest rate: ";
    cin >> balance >> APR;

    double interest = balance * (APR / 1200);

    cout << "The interest is $" << fixed << setprecision(2) << interest 
        << endl;

    return 0;
}