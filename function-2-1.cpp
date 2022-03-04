/*
#include<iostream>
using namespace std;
int minimum(int array[], int n);

int main(){
    int test1[5] = {1,3,5,7,9};
    int test2[6] = {-1,-2,4,6,8};
    int test3[] = {};
    
    int result1 = minimum(test1,5);

    int result2 = minimum(test2,6);
    int result3 = minimum(test3,0);
    
    cout<< "result1 = "<<result1<<endl;

    cout<< "result2 = "<<result2<<endl;
    cout<< "result3 = "<<result3<<endl;
    return 0;
}


*/

int minimum(int array[], int n){
    const int START = 0;
    if (n<1) return 0;
    int min = array[START];
    for (int i=0; i<n; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}
