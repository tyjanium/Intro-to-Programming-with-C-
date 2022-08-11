/******************************************************************************
(Population projection) Write a program that takes user input as number of 
years and projects population change. Use stats from Ex1.1
******************************************************************************/

#include <iostream>
using namespace std;

int main(){

    int current_pop = 312032486;        // Current population
    int births_per_year = 4505142;      
    int deaths_per_year = 2425846;      
    int imm_per_year = 700800;          // New immigrants per year
    int years;                          // Years of population change

    cout << "Enter the number of years: ";
    cin >> years;

    int projected_population = current_pop + (births_per_year * years) 
        - (deaths_per_year * years) + (imm_per_year * years);

    cout << "\nCurrent Population: " << current_pop << endl;
    cout << "The population in " << years << " will be " 
        << projected_population << endl;
    cout << "\n" << endl;

    return 0;
}