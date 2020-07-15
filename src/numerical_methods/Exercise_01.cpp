//
// Created by EverLookNeverSee@GitHub on 7/15/20.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // declaring variables
    double I, E, R, L, C, f;
    cout << "Enter values for E, R, L, C, and f respectively: ";
    // getting user input
    cin >> E >> R >> L >> C >> f;
    // calculating I and printing the result
    I = E / sqrt(pow(R, 2) + pow((2.0 * 3.1415 / L) - 1.0 /
            (2.0 * 3.1415 * C * f), 2));
    cout << "I: " << I;
}