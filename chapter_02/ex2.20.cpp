/******************************************************************************
(Slope of a line) Take (x1, y1) and (x2, y2) from the user and compute the
slope using the formula: (y2-y1) / (x2 - x1)
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    float x1, y1, x2, y2;

    cout << "Enter the coordinates for two points" << endl;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    float slope = (y2 - y1) / (x2 - x1);

    cout << "The slope of the line that connects two points (" << x1 
        << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is "
        << slope << endl;

    return 0;
}