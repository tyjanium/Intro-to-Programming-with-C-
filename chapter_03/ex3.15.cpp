/******************************************************************************
(Game: scissor, rock, paper) Write a program that plays the popular game.
(A scissor can cut paper, a rock can smash a scissors, and paper can cover 
rock) 

The program randomly generates a number 0, 1, or 2 representing scissor, rock,
paper. The program prompts the user to enter a number 0, 1, or 2 and displays
a meesage indicating whether the user or the computer wins, loses, or draws.
******************************************************************************/

#include <iostream>
#include <ctime>        // for time function
#include <cstdlib>      // for rand and srand functions

using namespace std;

int main(){

    srand(time(0));
    int computer_choice = rand() % 3;
    
    int player_choice;
    
    cout << "\nEnter scissor (0), rock (1), or paper (2): ";
    cin >> player_choice;

    // Identify computer choice
    if (computer_choice == 0)
        cout << "The computer is scissor. ";
    
    else if (computer_choice == 1)
        cout << "The computer is rock. ";

    else 
        cout << "The computer is paper. ";

    // Identify player choice
    if (player_choice == 0)
        cout << "You are scissor";
    
    else if (player_choice == 1)
        cout << "You are rock";

    else 
        cout << "You are paper";
    
    // Determine who wins
    if (computer_choice == player_choice)
        cout << " too. It is a draw." << endl;

    else if (computer_choice == 0 && player_choice == 1)
        cout << ". You win." << endl;

    else if (computer_choice == 0 && player_choice == 2)
        cout << ". You lose." << endl;

    else if (computer_choice == 1 && player_choice == 0)
        cout << ". You lose." << endl;

    else if (computer_choice == 1 && player_choice == 2)
        cout << ". You win." << endl;

    else if (computer_choice == 2 && player_choice == 0)
        cout << ". You win." << endl;

    else
        cout << ". You lose." << endl;

cout << "\n" << endl;

    return 0;
}
