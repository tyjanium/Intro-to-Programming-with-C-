/******************************************************************************
(Convert pounds into kilograms) Read in pounds and convert to kilograms. 
1 lbs = 0.454 kg
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float pounds;

    cout << "Enter a number in pounds: ";
    cin >> pounds;

    float kilograms = pounds * 0.454;

    cout << pounds << " pounds is " << kilograms << " kilograms " << endl;

    return 0;
}