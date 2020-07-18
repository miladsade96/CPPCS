//
// Created by EverLookNeverSee@GitHub on 7/18/20.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // declaring and initializing variables
    double w = 513.0, h = 3.0, phi = 30, radian_phi, P;
    // converting degree to radian
    radian_phi = phi * 3.1415 / 180.0;
    //calculating P and printing result
    P = (w * pow(h, 2.0) / 2.0) * ((1.0 - sin(radian_phi)) / (1.0 + sin(radian_phi)));
    cout << "P: " << P;
}
