/******************************************************************************
(Sort Three Integers) Write a program that prompts the user to enter three
integers and display the integers in non-decreasing order.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int integer1, integer2, integer3;

    cout << "Enter 3 integers: ";
    cin >> integer1 >> integer2 >> integer3;

    cout << "The integers in ascending order are ";

    if (integer1 > integer2 && integer1 > integer3){
        if (integer2 > integer3)
            cout << integer1 << " " << integer2 << " " << integer3 << endl;

        else
            cout << integer1 << " " << integer3 << " " << integer2 << endl;
    }

    else if (integer2 > integer3){
        if (integer1 > integer3)
            cout << integer2 << " " << integer1 << " " << integer3 << endl;            

        else
            cout << integer2 << " " << integer3 << " " << integer1 << endl;
    }  

    else {
        if (integer1 > integer2)
            cout << integer3 << " " << integer1 << " " << integer2 << endl;

        else
            cout << integer3 << " " << integer2 << " " << integer1 << endl;
    }
  
    return 0;
}