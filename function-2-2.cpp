#include<iostream>
#include<math.h>
using namespace std;
int binary_to_number(int binary_digits[], int number_of_digits);

int binary_to_number(int binary_digits[], int number_of_digits){
    int sum = 0;
    int adder = 0;
    for (int i=0; i<number_of_digits; i++){
        adder = pow(2,(number_of_digits -i -1)) * binary_digits[i];
        // cout << "adder is: " << adder << endl;
        sum += adder;
    }
    return sum;
}