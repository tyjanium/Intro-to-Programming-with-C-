/******************************************************************************
(Wind-chill temperature) Write a program that takes a temperature between -58F
and 41F and a wind speed >= 2, then calculate the wind-chill.
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float temp_fahrenheit, wind_speed;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp_fahrenheit;
    cout << "Enter the wind-speed in mph: ";
    cin >> wind_speed;

    float temp_windchill = 35.74 + (0.6215 * temp_fahrenheit)
        - (35.75 * pow(wind_speed, 0.16)) 
        + (0.4275 * temp_fahrenheit * pow(wind_speed, 0.16));

    cout << "The wind-chill is " << temp_windchill << endl;

    return 0;
}