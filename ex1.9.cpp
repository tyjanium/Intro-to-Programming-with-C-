/******************************************************************************
(Area and perimeter of a rectangle) Write a program that calculates the are 
and perimeter of a rectangle
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    float width, height;

    cout << "Enter a width: ";
    cin >> width;
    cout << "Enter a height: ";
    cin >> height;

    float area = width * height;
    float perimeter = 2 * (width * height);

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

    return 0;
}