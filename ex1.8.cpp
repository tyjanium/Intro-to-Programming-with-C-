/******************************************************************************
(Area and perimeter of a circle) Write a program that displays the area and 
perimeter of a circle that has a radius of 5.5 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    const float pi = 3.142;
    float radius;

    cout << "Enter a radius: ";
    cin >> radius;

    float area = radius * radius * pi;
    float perimeter = 2.0 * radius * pi;

    cout << "The area of the circle is " << area << endl;
    cout << "The perimeter of the circle is " << perimeter << endl;

    return 0;
}