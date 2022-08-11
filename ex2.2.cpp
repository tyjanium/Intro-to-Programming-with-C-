/******************************************************************************
(Compute the volume of a cylinder) Read in readius and length of a cylinder
and computes the area and volume.
area = radius * radius * pi
volume = area * length
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float radius, length;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius;
    cin >> length;

    const float pi = 3.1415926;
    float area = radius * radius * pi;
    float volume = area * length;

    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

    return 0;
}