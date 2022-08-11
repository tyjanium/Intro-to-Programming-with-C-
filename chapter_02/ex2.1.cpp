/******************************************************************************
(Convert Celsius to Fahrenheit) Read in a Celsius degree in a double then 
converts to Fahrenheit using the formula: (9/5) * celsius + 32
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    double temp_Celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> temp_Celsius;

    double temp_Fahrenheit = (9.0 / 5.0) * temp_Celsius + 32.0;

    cout << temp_Celsius << " degrees Celsius is equivalent to ";
    cout << temp_Fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}