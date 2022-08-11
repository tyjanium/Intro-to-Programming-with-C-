/******************************************************************************
(Calculate tips) Read in subtotal and gratuity rate. Compute gratuity and 
total. 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    float subtotal, gratuity_rate;

    cout << "Enter the subtotal and gratuity rate: ";
    cin >> subtotal >> gratuity_rate;

    float gratuity = subtotal * gratuity_rate / 100;
    float total = subtotal + gratuity;
    
    cout << "The gratuity is $" << gratuity << " and the total is $" 
        << total << endl;

    return 0;
}