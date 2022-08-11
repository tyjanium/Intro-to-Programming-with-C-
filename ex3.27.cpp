/******************************************************************************
(Current time) Revise Programming Exercise 2.8 to display the hour using a 
12-hour clock.
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

    cout << "Current time is ";

    // 24 switch cases to represent AM/PM
    switch (currentHour) {
        case 0:
            cout << "00" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 1: 
            cout << "01" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 2:
            cout << "02" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 3: 
            cout << "03" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 4:
            cout << "04" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 5:
            cout << "05" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 6:
            cout << "06" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 7:
            cout << "07" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 8: 
            cout << "08" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 9:
            cout << "09" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 10:
            cout << "10" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 11:
            cout << "11" << ":" << currentMinute << ":" 
                << currentSecond << " AM" << endl;
            break;

        case 12:
            cout << "12" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 13:
            cout << "01" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 14:
            cout << "02" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 15: 
            cout << "03" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 16:
            cout << "04" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 17:
            cout << "05" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 18:
            cout << "06" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 19:
            cout << "07" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 20:
            cout << "08" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 21:
            cout << "09" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 22:
            cout << "10" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;

        case 23:
            cout << "11" << ":" << currentMinute << ":" 
                << currentSecond << " PM" << endl;
            break;
    }

    return 0;
}