/******************************************************************************
(Game: lottery) Revise listing 3.7, Lottery cpp, to generate a lottery of a 3
digit number. The program prompts the user to enter a 3 digit number and
determines whether the user wins according to the following rules:

If the user input matches the lottery number in the exact order, the award is
$10,000. If all the digits in the user input match all the digits in the 
lottery number, the award is $3,000.

If 1 digit in the user input matches a digit in the lottery number, the award
is $1,000.
******************************************************************************/

#include <iostream>
#include <ctime>        // for time function
#include <cstdlib>      // for rand and srand functions

using namespace std;

int main(){

    // Generate a lotter number
    srand(time(0));
    int lottery = rand() % 1000;

    // Prompt the user to enter a guess
    cout << "Enter your lottery pick (3 digits): ";
    int guess;
    cin >> guess;

    // Get digits from lottery
    int lottery_digit1 = lottery / 100;
    int lottery_digit2 = lottery % 100 / 10;
    int lottery_digit3 = lottery % 10 / 1;
    
    // Get digits from guess
    int guess_digit1 = guess / 100;
    int guess_digit2 = guess % 100 / 10;
    int guess_digit3 = guess % 10 / 1;

    cout << "Lottery number is " << lottery << endl;
    
    // Check the guess
    if (guess == lottery)
        cout << "Exact match: you win $10,000" << endl;
        
    else if ((guess_digit1 == lottery_digit1
            && guess_digit3 == lottery_digit2
            && guess_digit2 == lottery_digit3)
            || (guess_digit2 == lottery_digit1
            && guess_digit1 == lottery_digit2
            && guess_digit3 == lottery_digit3)
            || (guess_digit2 == lottery_digit1
            && guess_digit3 == lottery_digit2
            && guess_digit1 == lottery_digit3)
            || (guess_digit3 == lottery_digit1
            && guess_digit1 == lottery_digit2
            && guess_digit2 == lottery_digit3)
            || (guess_digit3 == lottery_digit1
            && guess_digit2 == lottery_digit2
            && guess_digit1 == lottery_digit3))
    {
        cout << "Match all digits: you win $3,000" << endl;
    }
    
    else if (guess_digit1 == lottery_digit1
            || guess_digit1 == lottery_digit2
            || guess_digit1 == lottery_digit3
            || guess_digit2 == lottery_digit1
            || guess_digit2 == lottery_digit2
            || guess_digit2 == lottery_digit3
            || guess_digit3 == lottery_digit1
            || guess_digit3 == lottery_digit2
            || guess_digit3 == lottery_digit3)
    {
        cout << "Match one digit: you win $1,000" << endl;
    }

    else
        cout << "Sorry, no match" << endl;

    return 0;
}