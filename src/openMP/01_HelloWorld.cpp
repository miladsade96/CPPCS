//
// Created by EverLookNeverSee@Github on 7/19/20.
//

// importing relevant libraries
#include <iostream>
#include <omp.h>

using namespace std;

int main(){
#pragma omp parallel
    {
        cout << "HelloWorld!";
};
}
