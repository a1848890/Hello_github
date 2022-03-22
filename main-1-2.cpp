#include<iostream>
using namespace std;

int main(){
    double* p = nullptr; //initialize the pointer to nullptr
    p = new double[20];  // ask memory for the variable
    delete [] p; // free the memory pointed by the pointer

    return 0;
}
