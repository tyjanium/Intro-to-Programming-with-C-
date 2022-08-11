/******************************************************************************
(Game: pick a card) Write a program that simulates picking a card from a deck
of 52 cards. Your program should display the rank (Ace, 2, 3, 4, 5, 6, 7, 8,
9, 10, Jack, Queen, King) and suit (Clubs, Diamonds, Hearts, Spades) of the
card.
******************************************************************************/

#include <iostream>
#include <ctime>        // for time function
#include <cstdlib>      // for rand and srand functions
using namespace std;

int main(){

    srand(time(0));
    int rank = rand() % 13;     // random number representing card rank
    int suit = rand() % 4;      // random number representing card suit

    cout << "The card you picked is ";

    // Identify rank of card
    switch(rank){
        case 0:
            cout << "Ace of ";
            break;
        
        case 1:
            cout << "2 of ";
            break;

        case 2:
            cout << "3 of ";
            break;

        case 3:
            cout << "4 of ";
            break;

        case 4: 
            cout << "5 of ";
            break;

        case 5:
            cout << "6 of ";
            break;

        case 6:
            cout << "7 of ";
            break;

        case 7:
            cout << "8 of ";
            break;

        case 8:
            cout << "9 of ";
            break;

        case 9:
            cout << "10 of ";
            break;

        case 10:
            cout << "Jack of ";
            break;

        case 11:
            cout << "Queen of ";
            break;

        case 12:
            cout << "King of ";
            break;
    }

    // Identify suite of card
    switch(suit){
        case 0:
            cout << "Clubs" << endl;
            break;

        case 1:
            cout << "Diamonds" << endl;
            break;

        case 2:
            cout << "Hearts" << endl;
            break;

        case 3: 
            cout << "Spades" << endl;
            break;
    }

    return 0;
}
