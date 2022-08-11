/******************************************************************************
(Summation of series) Write a program that displays the result of the series:
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9
******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i){
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    
    return 0;
}