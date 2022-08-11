/******************************************************************************
(BMI Calculator) Let user enter weight, feet, and inches then calculate BMI
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double pounds, feet, inches;

    cout << "Enter weight in pounds: ";
    cin >> pounds;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;

    // Find total inches by converting feet to inches and adding to inches
    double total_inches = (feet * 12) + inches;

    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    double kilograms = pounds * KILOGRAMS_PER_POUND;
    double meters = total_inches * METERS_PER_INCH;

    // Calculate BMI
    double bmi = kilograms / pow(meters, 2);

    // Display the result
    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    
    else if (bmi < 25)
        cout << "Normal" << endl;

    else if (bmi < 30)
        cout << "Overweight" << endl;

    else
        cout << "Obese" << endl;
    
    return 0;
}