#include<iostream>
#include<math.h>
using namespace std;
int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[15] = {1,0,1,1,1,1,0,1,1,1,1,0,1,1,1};
    int decimal_number = binary_to_number(binary_digits, 15);
    cout << decimal_number << endl;
    return 0;
}
