/******************************************************************************
(Average speed in kilometers) Assume a runner runs 24 miles in 1 hour, 
40 minutes, and 35 seconds. Write a program that didplays the average speed
in kilometers per hour. (1 mile is 1.6 kilometers)
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    float miles, hours, minutes, seconds; 

    cout << "Enter miles ran: ";
    cin >> miles;
    cout << "Enter hours, minutes and seconds ran: ";
    cin >> hours;
    cin >> minutes;
    cin >> seconds;

    minutes = minutes / 60;             // Convert minutes into hours
    seconds = seconds / 3600;           // Convert seconds into hours

    cout << minutes;
    cout << seconds;

    float kilometers = miles * 1.6;
    hours = hours + minutes + seconds;
    float kph = kilometers / hours;    

    cout << "The number of kilometers run is " << kilometers << endl;
    cout << "Kilometers per hour is " << kph << endl;

    return 0;
}