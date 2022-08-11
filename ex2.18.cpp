/******************************************************************************
(Print a table) Write a program that displays the following table:
a   b   pow(a, b)
1   2   1
2   3   8
3   4   81
4   5   1024
5   6   15625
******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout << "a\tb\tpow(a, b)" << endl;
    
    int a;
    int b = 2;

    for(a = 1; a <= 5; a++){
        cout << a << "\t" << b << "\t" << pow(a, b) << endl;
        b++;
        if(b == 7){
            break;
        }
    }

    return 0;
}