/******************************************************************************
(Find the number of days in a month) Write a program that prompts the user to
enter the month and year and displays the number of days in the month. For
example, if the user enters month 2 and year 2012, the program should display 
that February 2012 had 29 days.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int month, year;

    cout << "Enter month (1-12) and year: ";
    cin >> month >> year;

    // Determine month with switch statement
    switch (month){
        case 1: cout << "January " << year << " had 31 days";
        break;

        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                cout << "February " << year << " had 29 days";
            else
                cout << "February " << year << " had 28 days";
        break;

        case 3: cout << "March " << year << " had 31 days";
        break;

        case 4: cout << "April " << year << " had 30 days";
        break;

        case 5: cout << "May " << year << " had 31 days";
        break;

        case 6: cout << "June " << year << " had 30 days";
        break;

        case 7: cout << "July " << year << " had 31 days";
        break;

        case 8: cout << "August " << year << " had 31 days";
        break;

        case 9: cout << "September " << year << " had 30 days";
        break;

        case 10: cout << "October " << year << " had 31 days";
        break;

        case 11: cout << "November " << year << " had 30 days";
        break;

        case 12: cout << "December " << year << " had 31 days";
        break;
    }

    return 0;
}