/******************************************************************************
(Sum the digits in an integer) Read an integer between 0 and 1000 and adds all
the digits in the integer.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int integer;

    cout << "Enter a number between 0 and 1000: ";
    cin >> integer;

    int ones = integer % 10;
    int tens = integer % 100 / 10;
    int hundreds = integer % 1000 / 100;

    cout << "The sum of the digits is " << ones + tens + hundreds << endl;

    return 0;
}