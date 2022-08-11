/******************************************************************************
(Cost of shipping) A shipping company uses the following function to calculate
the cost (in dollars) of shipping based on the weight of the package 
(in pounds)

c(w) =  3.5,  if 0 < w <= 1
        5.5,  if 1 < w <= 3
        8.5,  if 3 < w <= 10
        10.5, if 10 < w <= 20 

Write a program that promts the user to enter the weight of the package and
display the shipping cost. If the the weight is greater than 50, display a 
a message "the package cannot be shipped."
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float weight;

    cout << "Enter weight of package: ";
    cin >> weight;

    if (weight <= 0){
        cout << "Please enter a weight: ";
        cin >> weight;
    }
        
    if (weight > 0 && weight <= 1)
        cout << "Shipping cost is $3.50" << endl;
             
    else if (weight > 1 && weight <= 3)
        cout << "Shipping cost is $5.50" << endl;

    else if (weight > 3 && weight <= 10)
        cout << "Shipping cost is $8.50" << endl;

    else if (weight > 10 && weight <= 20)
        cout << "Shipping cost is $10.50" << endl;
        
    else
        cout << "A package weighing over 20 lbs cannot be shipped" << endl;
          
    return 0;
}