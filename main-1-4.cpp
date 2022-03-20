
#include<iostream>
using namespace std;

void cpyda(double *old_array,double *new_array,int length);
//void printArray(double *array, int length);

int main(){
    double array1[5] = {1.1,2.2,3.3,4.4,5.5};
    double array2[5];
    cpyda(array1, array2, 5);
    printArray(array2,5);
}

