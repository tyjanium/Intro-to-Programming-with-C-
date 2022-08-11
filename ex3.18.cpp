/******************************************************************************
(Game: addition for three numbers) Listing 3.4, SubtractionQuiz.cpp randomly
generates a subtraction question. Revise the program to generate an addition 
question randomly with three integers less than 100.
******************************************************************************/

#include <iostream>
#include <ctime>        // for time function
#include <cstdlib>      // for rand and srand functions
using namespace std;

int main(){

    // Generate three random 3-digit integers
    srand(time(0));
    int number1 = rand() % 1000;
    int number2 = rand() % 1000;
    int number3 = rand() % 1000;

    // Prompt the user to answer what is number1 + number2 + number3
    cout << "What is " << number1 << " + " << number2 << " + " << number3 
        << "? ";
    int answer;
    cin >> answer;

    // Grade the answer and display the result
    if (number1 + number2 + number3 == answer)
        cout << "You are correct!";

    else
        cout << "Your answer is wrong. " << number1 << " + " << number2
            << " + " << number3 << " is " << number1 + number2 + number3
            << endl;

    return 0;
}
