/******************************************************************************
(Science: Calculating energy) Write a program that calculates the energy 
required to heat water from an initial temperature to a final temperature. Use
the following formula Q = M * (final temp - initial temp) * 4184
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float m, temp0, temp1;          // Amount of water, initial, and final temp

    cout << "Enter the amount of water: ";
    cin >> m;

    cout << "Enter the initial temperature: ";
    cin >> temp0;

    cout << "Enter final temperature: ";
    cin >> temp1;

    cout << "The energy needed is " 
        << fixed << setprecision(1) << (m * (temp1 - temp0) * 4184) << endl; 

    return 0;
}