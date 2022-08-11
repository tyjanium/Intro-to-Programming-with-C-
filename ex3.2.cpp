/******************************************************************************
(Check Numbers) Write a program that prompts the user to enter two integers 
and checks wether the first number is divisible by the second.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int integer1, integer2;

    cout << "Enter two integers: ";
    cin >> integer1 >> integer2;

    if (integer1 % integer2 == 0)
        cout << integer1 << " is divisible by " << integer2 << endl;

    else
        cout << integer1 << " is not divisible by " << integer2 << endl;

    return 0;
}