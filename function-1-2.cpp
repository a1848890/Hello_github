/*
#include<iostream>
using namespace std;
double average(int array[], int n);

int main(){
    int test[5] = {1,2,3,4,5};
    double average_number = average(test, 5);
    cout << "The average numeber is: "<< average_number<<endl;
    return 0;
}
*/

double average(int array[], int n){
    double average = 0.0;
    int sum = 0;
    if (n < 1) return average;
    else{
        for (int i=0; i<n; i++){
            sum += array[i];
        }
        average = sum / n;
    }
    return average;
}

