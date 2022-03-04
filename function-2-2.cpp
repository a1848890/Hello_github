/*
#include<iostream>
using namespace std;
int maximum(int array[], int n);

int main(){
    int test1[5] = {1,3,5,7,9};
    int test2[6] = {-1,-2,4,6,8};
    int test3[] = {};
    
    int result1 = maximum(test1,5);

    int result2 = maximum(test2,6);
    int result3 = maximum(test3,0);
    
    cout<< "result1 = "<<result1<<endl;

    cout<< "result2 = "<<result2<<endl;
    cout<< "result3 = "<<result3<<endl;
    return 0;
}

*/

int maximum(int array[], int n){
    const int START = 0;
    if (n<1) return 0;
    int max = array[START];
    for (int i=0; i<n; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
}
