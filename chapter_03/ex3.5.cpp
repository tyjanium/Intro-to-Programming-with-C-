/******************************************************************************
(Find future dates) Write a program that prompts the user to enter an integer
for today's day of the week (Sunday is 0, Monday is 1, etc). Also, prompt the
user to enter the number of days after today for a future day and display the 
future day of the week.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int today, elapsed_days;

    cout << "Enter today's day: ";
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    cin >> elapsed_days;

    cout << "Today is ";

    // Multiway if-else statement to identify day 
    if (today == 0)
        cout << "Sunday ";

    else if (today == 1)
        cout << "Monday ";

    else if (today == 2)
        cout << "Tuesday ";

    else if (today == 3)
        cout << "Wednesday ";

    else if (today == 4)
        cout << "Thursday ";

    else if (today == 5)
        cout << "Friday ";

    else 
        cout << "Saturday ";

    int future_day = today + elapsed_days % 7;

    // Multiway if-else statement to identify the future day
    if (future_day == 0)
        cout << "and the future day is Sunday ";

    else if (future_day == 1)
        cout << "and the future day is Monday ";

    else if (future_day == 2)
        cout << "and the future day is Tuesday ";

    else if (future_day == 3)
        cout << "and the future day is Wednesday ";

    else if (future_day == 4)
        cout << "and the future day is Thursday ";

    else if (future_day == 5)
        cout << "and the future day is Friday ";

    else 
        cout << "and the future day is Saturday ";
    
    return 0;
}