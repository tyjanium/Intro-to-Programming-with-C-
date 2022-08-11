/******************************************************************************
(Geometry: two rectangles) Write a program that prompts the user to enter the 
center x,y coordinates, width and height of two rectangles and determines 
whether the second triangle is inside the first or overlaps with the first.
Test your program to cover all cases.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float x1, y1, width1, height1, x2, y2, width2, height2;
    
    // Get rectangle 1 data
    cout << "Enter r1's center x, y coordinates, width, and height: ";
    cin >> x1 >> y1 >> width1 >> height1;

    // Get rectangle 2 data
    cout << "Enter r2's center x, y coordinates, width, and height: ";
    cin >> x2 >> y2 >> width2 >> height2;

    // Top-Left (P1) and Bottom-Left (P2) coners of rectangle R1
    float P1_X = x1 - (width1);
    float P1_Y = y1 + (height1);
    float P2_X = x1 + (width1);
    float P2_Y = y1 - (height1);

    // Top-Left (P3) and Bottom-Left (P4) coners of rectangle R2
    float P3_X = x2 - (width2);
    float P3_Y = y2 + (height2);
    float P4_X = x2 + (width2);
    float P4_Y = y2 - (height2);

    // Determine if R2 is inside R1
    if (P1_X < P3_X && P1_Y > P3_Y && P2_X > P4_X && P2_Y < P4_Y)
        cout << "R2 is inside R1" << endl;

    // Determine if R2 overlaps R1
    else if ()
        cout << "R2 overlaps R1" << endl;
    
    // R2 does not overlap R1
    else cout << "R2 does not overlap R1" << endl;

    return 0;
}
