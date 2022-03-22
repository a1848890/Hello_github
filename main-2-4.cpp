#include<iostream>
using namespace std;

float add_operation(float left, float right);
float sub_operation(float left, float right);
float multy_operation(float left, float right);
float div_operation(float left, float right);
float calculation(float left, float right, float(*f)(float, float));
/*
int main(){
    float result = calculation(1.23,4.56,multy_operation);
    cout <<"The result is: "<<result<< endl;
    return 0;
}
*/
int main(){
    float left;
    cout << "Please enter the first number: ";
    cin >> left;
    
    float right;
    cout << "Please enter the second number: ";
    cin >> right;
    
    char operation;
    cout << "Please enter the operation: ";
    cin >> operation;

    int i = 10;
    float(*f[])(float,float) = {add_operation, sub_operation, multy_operation, div_operation};
    if (operation == '+') i = 0;
    if(operation == '-') i = 1;
    if (operation == '*') i = 2;
    if (operation == '/') i = 3;
    if (i==10){
        cout << "Warning: You are using undefined operator!\n";
        return 0;
    }
    if(i!=10){
        float result = calculation(left,right,*f[i]);
        cout << left << operation << right << " = "<< result << endl;
    }
    return 0;
}



float add_operation(float left, float right){
    return left+right;
}
float sub_operation(float left, float right){
    return left-right;
}
float multy_operation(float left, float right){
    return left*right;
}
float div_operation(float left, float right){
    return left/right;
}


float calculation(float left, float right, float(*f)(float, float)){
    float result;
    result = (*f)(left,right);
    return result;
}



