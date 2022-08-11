/******************************************************************************
(Area of a triangle) Take user input for (x1, y1), (x2, y2), (x3, y3), then
compute area of the triangle using the formula:
s = (side1 + side2 + side3) / 2
area = sqrt(s(s - side1)(s - side2)(s - side3))
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates for a triangle." << endl;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    cout << "Enter x3 and y3: ";
    cin >> x3 >> y3;

    // Calculate length of each side
    float side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));  

    // Calculate semi-perimeter
    float s = (side1 + side2 + side3) / 2;

    // Calculate area of triangle
    float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "The area of the triangle is " << area << endl;

    return 0;
}