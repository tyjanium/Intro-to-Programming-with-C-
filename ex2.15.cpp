/******************************************************************************
(Distance between two points) Write a program that prompts the user to enter
two points (x1, y1) and (x2, y2) and calculate the distance between them
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double x1, y1, x2, y2;

    cout << "\nEnter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "\nEnter x2 and y2: ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "\nThe distance between the two points is " << distance << endl;

    return 0;
}