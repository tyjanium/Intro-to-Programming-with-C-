/******************************************************************************
(Phsics: acceleration) Write a program that prompts the user to enter starting
and ending velocity in meters/sec and the time span in seconds. Calculate the
average acceleration using the formula a = (V1 - V0) / t 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float v0, v1, t;        // Starting velocity, ending velocity, time span

    cout << "Enter starting velocity, ending velocity, and time span: ";
    cin >> v0 >> v1 >> t;

    float a = (v1 - v0) / t;      // Calculate average acceleration

    cout << "The average acceleration is " << a << endl;

    return 0;
}