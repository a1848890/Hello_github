#include<iostream>
using namespace std;

int size_of_variable_star_t();

int main(){
    int a = size_of_variable_star_t();
    cout << "a = "<< a << endl;
    return 0;
}

int size_of_variable_star_t(){
    int *t = nullptr; // initialize the pointer to null pointer
    t = new int;  // assign memory for this pointer
    delete t;
    return sizeof(*t);
}
