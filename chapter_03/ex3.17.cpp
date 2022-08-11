/******************************************************************************
(Science: wind-chill temperature) Write a program that prompts the user to 
enter a temperature and a wind speed. The program displays the wind-chill temp
if the input is valid; otherwise, it displays a message indicating whether the
temperature and/or wind speed is invalid.
******************************************************************************/

#include <iostream>
#include <cmath>        // For sqrt and pwr functions

using namespace std;

int main(){

    // Declare variables for temperature in Fahrenheit (t), 
    // and wind speed (v)
    float t, v;

    cout << "Enter temperature in Fahrenheit and wind speed." << endl;
    cout << "Temperature: ";
    cin >> t;
    cout << "Wind speed: ";
    cin >> v;

    // Calculate windchill
    float windchill = 35.74 + ((0.6215 * t) - (35.75 * pow(v, 0.16))
        + ((0.4275 * t) * pow(v, 0.16)));
    
    // Determine if inputs are valid
    if ((t >= -58 && t <= 41) && (v >= 2)){
        cout << "Windchill is " << windchill << endl;
    }
    
    else {
        cout << "Invalid input. Temperature must be greater than" << endl;
        cout << "-58 degrees and less than 41 degrees Fahrenheit." << endl;
        cout << "Wind speed must be greater than or equal to 2 mph." << endl;
    }
    
    return 0;
}
