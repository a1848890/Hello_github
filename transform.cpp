#include<math.h>
#include<stddef.h>
#include<iostream>
#include<string>
using namespace std;
void print_as_binary(std::string decimal_number);

int main(){
    cout << "Please enter an decimal number: "<< endl;
    string decimal;
    cin >> decimal;
    while (decimal){
    print_as_binary(decimal);
    }
    
    return 0;
}





void print_as_binary(std::string decimal_number){
    int decimal_strlen = decimal_number.length();
    const int MAX_POWER = 39;
    int array[31] = {0};
    int decimal_value = 0;
    int adder = 0;
    for(int i=0; i<decimal_strlen; i++){
        int int_value = (int)(decimal_number[i]) -48;
        int multiplier = pow(10, (decimal_strlen - i - 1));
        adder = int_value * multiplier;
        decimal_value += adder;
    }
    // cout << "decimal_value: "<< decimal_value<<endl;

    int count_binary = 0;
    for (int j=0; j<MAX_POWER; j++){
        int remainder = decimal_value%2;
        decimal_value /= 2;
        array[j] = remainder;
        //cout << array[j];
        count_binary ++;   
        if (decimal_value < 1) break;
    }
    //cout << "binary length is: "<< count_binary<<endl;

    for (int m = count_binary-1 ; m >= 0; m-- ){
        cout << array[m];
    }
    cout << endl;
}

