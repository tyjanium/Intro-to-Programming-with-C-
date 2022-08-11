/******************************************************************************
(Geometery: points in triangle?) Suppose a right triangle is place on a plane.
The right-angle point is placed at (0,0), the other two points are places at
(200,0) and (0,100). Write a program that prompts the user to enter a point
with x and y coordinates and determines whether the point is inside the 
tiangle.
******************************************************************************/

#include <iostream>
#include <cmath>       // fabs()
using namespace std;

int main(){

    // User selected point
    float x4, y4;

    cout << "Enter a point's x and y coordinates: ";
    cin >> x4 >> y4;

    // Coordinates for given triangle
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 100;
    int x3 = 200;
    int y3 = 0;

    // area_a to represent the area of the given triangle A (ABC)
    // Use fabs() to return absolute value as area cannot be negative
    float area_a = fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 
        * (y1 - y2))/ 2);

    // area_a1 to represent the area of subtriangle A1 (ABP) where P is (x4,y4)
    float area_a1 = fabs((x1 * (y2 - y4) + x2 * (y4 - y1) + x4 
        * (y1 - y2)) / 2);

    // area_a2 to represent the area of subtriangle A2 (PBC)
    float area_a2 = fabs((x4 * (y2 - y3) + x2 * (y3 - y4) + x3 
        * (y4 - y2)) / 2);

    // area_a3 to represent the area of subtriangle A3 (APC)
    float area_a3 = fabs((x1 * (y4 - y3) + x4 * (y3 - y1) + x3 
        * (y1 - y4)) / 2);
    
    // Determine if point is inside the triangle
    if (area_a1 + area_a2 + area_a3 == area_a)
        cout << "The point is inside the triangle" << endl;
        
    else
        cout << "The point is not in the triangle" << endl;

    return 0;
}
