/*
#include<iostream>
using namespace std;

double sumeven(double array[], int n); 

int main(){
    double arr[10] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    double sum = sumeven(arr,10);
    cout<<"The sum of even position number is: "<<sum<<endl;
    return 0;
}
*/

double sumeven(double array[], int n){
    double sum = 0.0;
    if(n<1) return sum;
    for (int i=0; i<n; i+=2){
        sum += array[i];
    }

    return sum;
}
