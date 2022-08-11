/******************************************************************************
(Current time) Write a program that displays current time according to user 
offset to GMT
******************************************************************************/

#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int timezoneOffset;
    
    cout << "Enter the time zone offset to GMT: ";
    cin >> timezoneOffset;
    
    // // Total seconds since Jan 01 00:00:00 1970 with time zone offset 
    int totalSeconds = time(0) + (timezoneOffset * 3600); 

    int currentSecond = totalSeconds % 60;  // Current second in the minute

    int totalMinutes = totalSeconds / 60;   // Total minutes

    int currentMinute = totalMinutes % 60;  // Current minute in the hour

    int totalHours = totalMinutes / 60;     // Total hours

    int currentHour = totalHours % 24;      // Current hour

    cout << "Current time is " << currentHour << ":" << currentMinute 
        << ":" << currentSecond << endl;

    return 0;
}