/******************************************************************************
(Population projection) Census Bureau projections:
One birth every 7 seconds
One death every 13 seconds
One new immigrant every 45 seconds

Assuming current population is 312,032,486. Write a program that calculates 
the population for each of the next 5 years.
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int sec_per_year = 31536000;        // Seconds per year
    int current_pop = 312032486;        // Current population
    int births_per_year = 4505142;      
    int deaths_per_year = 2425846;      
    int imm_per_year = 700800;          // New immigrants per year

    int year_one = current_pop + births_per_year - deaths_per_year 
        + imm_per_year;

    int year_two = year_one + births_per_year - deaths_per_year 
        + imm_per_year;

    int year_three = year_two + births_per_year - deaths_per_year 
        + imm_per_year;

    int year_four = year_three + births_per_year - deaths_per_year 
        + imm_per_year;

    int year_five = year_four + births_per_year - deaths_per_year 
        + imm_per_year;

    cout << "\nCurrent Population: " << current_pop << endl;
    cout << "Population estimate in 1 year: " << year_one << endl;
    cout << "Population estimate in 2 years: " << year_two << endl;
    cout << "Population estimate in 3 years: " << year_three << endl;
    cout << "Population estimate in 4 years: " << year_four << endl;
    cout << "Population estimate in 5 years: " << year_five << endl;
    cout << "\n" << endl;

    return 0;
}