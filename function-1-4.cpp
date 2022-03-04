/*
#include<iostream>
using namespace std;
int sumtwo(int array[], int secondarray[], int n);

int main(){
    int arr1[10] = {9,8,7,6,5,4,3,2,1,0};
    int arr2[10] = {9,8,7,6,5,4,3,2,1,0};
    int result = sumtwo(arr1, arr2, 10);
    cout << "The sum of these two arrays are :"<< result<< endl;
    return 0;
}

*/
int sumtwo(int array[], int secondarray[], int n){
    int total_sum = 0;
    int par_sum = 0;
    if (n<1) return total_sum;
    for (int i=0; i<n; i++){
        par_sum = array[i] + secondarray[i];
        total_sum += par_sum;
    }
    return total_sum;
}
