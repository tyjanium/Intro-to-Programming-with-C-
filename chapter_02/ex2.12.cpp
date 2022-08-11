/******************************************************************************
(Find runway length) Given an airplane's acceleration a and take-off speed v, 
with the following formula: length = v^2/2a
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float v, a;                             // velocity and acceleration

    cout << "Enter speed and acceleration: ";
    cin >> v >> a;

    float length = pow(v, 2) / (2 * a);

    cout << "The minimum runway length for this airplane is " 
        << length << endl;

    return 0;
}