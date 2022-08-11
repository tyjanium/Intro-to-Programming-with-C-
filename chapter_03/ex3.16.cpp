/******************************************************************************
(Compute the perimeter of a triangle) Write a program that reads three edges
for a triangle and computes the perimeter if the input is valid. Otherwise,
display that the input is invalid. The input is valid if the sum of every pair
of two edges is greater than the remaining edge.
******************************************************************************/

#include <iostream>
#include <cmath>        // For sqrt and pwr functions

using namespace std;

int main(){

    // Declare variables for coordinates
    int x1, y1, x2, y2, x3, y3;

    // Take (x, y) coordinates
    cout << "Enter the coordinates for a triangle." << endl;
    cout << "X1: ";
    cin >> x1;
    cout << "Y1: ";
    cin >> y1;
    cout << "X2: ";
    cin >> x2;
    cout << "Y2: ";
    cin >> y2;
    cout << "X3: ";
    cin >> x3;
    cout << "Y3: ";
    cin >> y3;

    // Length of side 1, (x1, y2) and (x2, y2)
    float side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Length of side 2, (x2, y2) and (x3, y3)
    float side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    // Length of side 3, (x3, y3) and (x1, y2)
    float side3 = sqrt(pow(x1 - x3, 2) + pow(y3 - y1, 2));

    cout << "The length of side 1 is " << side1 << " units." << endl;
    cout << "The length of side 2 is " << side2 << " units." << endl;
    cout << "The length os side 3 is " << side3 << " units." << endl;

    // Calculate perimeter
    float perimeter = side1 + side2 + side3;

    // Check if input is valid
    if (((side1 + side2) > side3) && ((side2 + side3) > side1)
        && ((side3 + side1) > side2)){
            cout << "The perimeter of the triangle is " << perimeter 
            << " units." << endl; 
        }
    
    else
        cout << "Input is invalid";
    

    return 0;
}
