/******************************************************************************
(Find the number of years) Read in minutes and calculate number oy years and 
days. Assume a year has 365 days.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int minutes;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    int years = minutes / 525600;
    int min_remiander = minutes % 525600;   // Minutes minus whole years
    int days = min_remiander / 1440;

    cout << minutes << " is approximately " << years << " and " 
        << days << " days" << endl;
 
    return 0;
}