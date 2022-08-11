/******************************************************************************
(Quadratic Equations) Get user input for a, b, and, c values and calculate the
roots of a quadratic equation. 
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;
    
    cout << "A quadratic equation takes the form of ax^2 + bx + c." << endl;
    cout << "Enter values for a, b, and c to calculate the root(s) of" << endl;
    cout << "the equation: ";
    cin >> a >> b >> c;

    // Calculate the discriminant of the quadratic equation
    double discriminant = pow(b, 2) - 4 * a * c; 

    // Calculate roots r1/r2
    double r1 = ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    double r2 = ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

    // Determine number of roots
    if (discriminant > 0)
        cout << "The equation has 2 roots: " << r1 << " and " << r2 << endl;
    
    if (discriminant == 0)
        cout << "The equation has 1 root: " << r1 << endl;

    if (discriminant < 0)
        cout << "The equation has no real roots" << endl;

    return 0;
}