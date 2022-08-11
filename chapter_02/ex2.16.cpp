/******************************************************************************
(Area of a hexagon) Prompt the user enter the length of a side of a hexagon
and calculate the area of the hexagon.
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float side_length;

    cout << "Enter the side length: ";
    cin >> side_length;

    float area_hexagon = ((3 * sqrt(3)) / 2) * pow(side_length, 2);

    cout << "The area of the hexagon is " << area_hexagon << endl;

    return 0;
}