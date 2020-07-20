//
// Created by EverLookNeverSee@Github on 7/19/20.
//

// importing relevant libraries
#include <iostream>
#include <omp.h>

using namespace std;

int main(){
    // setting the number of threads in parallel region
    omp_set_num_threads(4);
#pragma omp parallel
    {
        // getting current thread number
        int ID = omp_get_thread_num();
        cout << "HelloWorld! , ID: " << ID << endl;
};
}
