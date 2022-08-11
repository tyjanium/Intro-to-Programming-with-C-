/******************************************************************************
(Check temperature) Write a program that prompts the user to enter a number
for temperature. If the temperature is less than 30, display "too cold"; if
temperature is greater than 100, display "too hot"; otherwise, display 
"just right".
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float temperature;

    cout << "Enter a temperature: ";
    cin >> temperature;

    if (temperature < 30.0)
        cout << "Too Cold!" << endl;

    else if (temperature > 100.0)
        cout << "Too Hot!" << endl;

    else
        cout << "Just Right!" << endl;
    
    return 0;
}