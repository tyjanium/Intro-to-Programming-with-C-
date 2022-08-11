/******************************************************************************
(Geometry: intersecting points) Two points on line 1 are given a (x1,y1) and
(x2,y2) and on line 2 as (x3,y3) and (x4,y4). The intersection of two lines 
can be found by solving the following linear equation:

(y1 - y2)x - (x1 - x2)y = (y1 - y2)x1 - (x1 - x2)y1
(y3 - y4)x - (x3 - x4)y = (y3 - y4)x3 - (x3 - x4)y3

This linear equation can be solved using Cramer's rule (see programming ex 3.3)
If the equation has no solutions, the two lines are parallel. Write a program
that prompts the user to enter four points and display the intersecting point.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    // Declare variables for (x,y) coordinates
    float x1, y1, x2, y2, x3, y3, x4, y4;
    
    cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // Declare and initialize variables for Cramer's rule:
    // ax + by = e
    float a = y1 - y2;
    float b = x2 - x1;
    float e = (y1 - y2) * x1 - (x1 - x2) * y1;

    // cx + dy = f
    float c = y3 - y4;
    float d = x4 - x3;
    float f = (y3 - y4) * x3 - (x3 - x4) * y3;

    float determinant = a * d - b * c;

    // If ad - bc = 0, the lines are parallel thus no intersection
    if (determinant == 0)
        cout << "The equation has no solution, the lines are parallel" << endl;

    else
        cout << "The intersecting point is x: " 
            << (e * d - b * f) / determinant << " and y: " 
            << (a * f - e * c) / determinant << endl;

    return 0;
}
