/******************************************************************************
(Geometry: two circles) Write a program that prompts the user to enter the 
center coordinates and radii of two circles and determines whether the second 
circle is inside the first or overlaps with the first. (Hint: circle2 is inside
circle1 if the distance between the two centers <= |r1 - r2| and circle2 
overlaps circle1 if the distance between the two centers <= r1 + r2. Test your 
program to cover all cases.)
******************************************************************************/

#include <iostream>
#include <cmath>        // sqrt(), abs()
using namespace std;

int main(){

    float x1, y1, x2, y2, radius1, radius2;
    
    cout << "Enter circle1's center x-, y-coordinates, and radius: ";
    cin >> x1 >> x2 >> radius1;
    cout << "Enter circle2's center x-, y-coordinates, and radius: ";
    cin >> x2 >> y2 >> radius2;

    // Calculate distance between center points 
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Determine if Circle2 is inside, overlaps, or is outside Circle1
    if (distance <= abs(radius1 - radius2))
        cout << "Circle2 is inside Circle1" << endl;

    else if (distance <= radius1 + radius2)
        cout << "Circle2 overlaps Circle1" << endl;
    
    else cout << "Circle2 does not overlap Circle1" << endl;

    return 0; 
}