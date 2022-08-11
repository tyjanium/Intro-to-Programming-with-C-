/******************************************************************************
(Convert feet to meters) Read in feet and convert to meters. 1 ft = 0.305 m
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float feet;

    cout << "Enter a value for feet: ";
    cin >> feet;

    float meters = feet * 0.305;

    cout << feet << " feet is " << meters << endl;

    return 0;
}