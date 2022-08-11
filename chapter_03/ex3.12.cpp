/******************************************************************************
(Game: heads or tails) Write a program that lets the user guess whether the
flip of a coin results in heads or tails. The program randomly generates a 
integer 0 or 1, which represents heads or tails. Prompt the user to enter a 
guess and report if the guess is correct or incorrect. 
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int guess;          // Player's guess

    srand(time(0));
    int coin_flip = rand() % 2;     // Results of coin flip

    cout << "Guess heads (1) or tails (0): ";
    cin >> guess;

    if (guess == coin_flip)
        cout << "Correct! ";

    else
        cout << "Incorrect! ";

    if (coin_flip == 0)
        cout << "It is tails" << endl;

    else
        cout << "It is heads" << endl;
    
    return 0;
}