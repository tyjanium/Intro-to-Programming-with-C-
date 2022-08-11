/******************************************************************************
(Geometry: point in a circle?) Write a program that prompts the user to enter
a point (x,y) and checks whether the point is within the circle centered at
(0,0) with radius 10.
******************************************************************************/

#include <iostream>
#include <cmath>        // for sqrt and pow functions
using namespace std;

int main(){

    cout << "Enter a point (x,y) to determine if is inside a circle of "
        << "radius 10, centered at (0,0)." << endl; 

    int x2, y2;

    cout << "Enter a point with two coordinates (x,y): ";
    cin >> x2 >> y2;

    // Declare and initialize varibles representing circle centered at (0,0)
    int x1 = 0;
    int y1 = 0;

    // Calculate distance 
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // If distance is <= to radius, the point is inside the circle
    if (distance <= 10)
        cout << "Point (" << x2 << "," << y2 << ") is in the circle" << endl;

    else
        cout << "Point (" << x2 << "," << y2 << ") is not in the circle" 
            << endl;

    return 0;
}
