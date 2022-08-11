/******************************************************************************
(Game: addition quiz) Write a program that randomly generates an addition 
question with two integers less than 100.
******************************************************************************/

#include <iostream>
#include <ctime>    // for time function
#include <cstdlib>  // for rand and srand functions
using namespace std;

int main(){

    // Generate 2 random two-digit integers
    srand(time(0));
    int number1 = rand() % 100;
    int number2 = rand() % 100;

    int answer;
   
    cout << "What is " << number1 << " + " << number2 << "? ";
    cin >> answer;

    // Grade answer and display the result
    if (number1 + number2 == answer)
        cout << "You are correct!" << endl;
    else
        cout << "Your answer is wrong. " << number1 << " + " << number2 
            << " is " << number1 + number2 << endl;
          
    return 0;
}