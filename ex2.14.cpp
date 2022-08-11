/******************************************************************************
(Body Mass Index) Prompt user to enter weight in pounds and height in inches,
then compute BMI
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float weight = weight;
    float height = height;

    cout << "\nEnter weight in pounds: ";
    cin >> weight;
    cout << "Enter height in inches: ";
    cin >> height;

    float kilograms = weight * 0.45359237;
    float meters = height * 0.0254;

    cout << "\nweight is " << kilograms << " kilograms" << endl;
    cout << "height is " << meters << " meters" << endl;

    float bmi = kilograms / pow(meters, 2);

    cout << "\nBMI is " << bmi << endl;
    cout << "\n" << endl;

    return 0;

}