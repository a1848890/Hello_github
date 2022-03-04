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
