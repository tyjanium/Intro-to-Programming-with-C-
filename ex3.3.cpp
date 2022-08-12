/******************************************************************************
(Solve 2 x 2 Linear Equations) Write a program that prompts the user to enter
a, b, c, d, e, and f and displays the result of ax + by = e and cx + dy = f
where x = (ed - bf)/(ad - bc) y = (af -ec)/(ad - bc)
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    double a, b, c, d, e, f;

    cout << "Enter values for a, b, c, d, e, and, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    double x = (e * d - b * f) / (a * d - b * c);
    double y = (a * f - e * c) / (a * d - b * c);
    
    if ((a * d) - (b * c) == 0)
        cout << "The equation has no solution" << endl;

    else
        cout << "x is " << x << " and y is " << y << endl; 
    
    return 0;
}