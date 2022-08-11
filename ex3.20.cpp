/******************************************************************************
(Geometry: point in a rectangle) Write a program that prompts thew user to 
enter a point (x,y) and checks whether the point is within the rectangle 
centered at (0,0) with 10 and height 5. 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    cout << "Enter a point (x,y) to determine if is inside a rectangle "
        << "centered at (0,0) with width 10 and height 5" << endl; 

    int x, y;

    cout << "Enter a point with two coordinates (x,y): ";
    cin >> x >> y;

    // Calculate horizontal and vertical distance of rectangle edge from (0,0)
    int horizontal_d = 10 / 2;
    int vertical_d = 5 / 2;
    
    // Determine if point is inside rectangle
    if (x <= horizontal_d && y <= vertical_d)
        cout << "Point (" << x << "," << y << ") is in the rectangle" << endl;

    else
        cout << "Point (" << x << "," << y << ") is not in the rectangle" 
            << endl;

    return 0;
}
