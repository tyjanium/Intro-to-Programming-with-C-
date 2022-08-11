/******************************************************************************
(Cost of driving) Take distance driven, the fuel efficiency in mph, and the
price per gallon then compute the cost of the trip.
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float distance, mph, price;

    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter the miles per gallon: ";
    cin >> mph;
    cout << "Enter the price per gallon: ";
    cin >> price;

    float trip_cost = (distance / mph) * price;

    cout << "The cost of driving is $" << fixed << setprecision(2) << trip_cost 
        << endl; 

    return 0;
}