/******************************************************************************
(Use the && and || operators) Write a program that prompts the user to enter an
integer and determines wither it is divisible by 5 and 6, whether it is 
divisible by 5 or 6, and whether it is divisible by 5 or 6, but not both.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int dividend;

    cout << "Enter an integer: ";
    cin >> dividend;

    // Determine if dividend is divisible by 5 AND 6
    cout << "Is " << dividend << " divisible by 5 and 6? ";
    if (dividend % 5 == 0 && dividend % 6 == 0)
        cout << "true" << endl;

    else
        cout << "false" << endl;

    // Determine if dividend is divisible by 5 OR 6
    cout << "Is " << dividend << " divisible by 5 or 6? ";
    if (dividend % 5 == 0 || dividend % 6 == 0)
        cout << "true" << endl;

    else
        cout << "false" << endl;

    // Determine if dividend is divisible by 5 OR 6, but not BOTH
    cout << "Is " << dividend << " divisible by 5 or 6, but not both? ";
    if (dividend % 5 == 0 || dividend % 6 == 0){
         if (dividend % 5 == 0 && dividend % 6 == 0){
             cout << "false" << endl;
         }

         else 
            cout << "true" << endl;
    }

    else
        cout << "false" << endl;
       
    return 0;
}
