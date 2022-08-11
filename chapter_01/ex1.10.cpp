/******************************************************************************
(Average speed in miles per hour) Calculate average speed in miles per hour 
from kilometers and minutes traveled.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    float kilometers, minutes; 

    cout << "Enter kilometers ran: ";
    cin >> kilometers;
    cout << "Enter minutes: ";
    cin >> minutes;

    float miles = kilometers / 1.6;
    float hours = minutes / 60;
    float mph = miles / hours;

    cout << "The number of miles run is " << miles << endl;
    cout << "Miles per hour is " << mph << endl;

    return 0;
}