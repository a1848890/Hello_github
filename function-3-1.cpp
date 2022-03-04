/*
#include<iostream>
using namespace std;
bool fanarray(int array[], int n);

int main(){
    int arr1[6] = {1,2,3,3,2,1};
    int arr2[6] = {1,3,5,5,3,2};
    int arr3[7] = {1,3,5,7,5,3,1};
    int arr4[7] = {1,3,5,9,5,3,2};
    int arr5[7] = {3,2,5,4,6,4,5};

    bool test1 = fanarray(arr1, 6);

    bool test2 = fanarray(arr2, 6);
    bool test3 = fanarray(arr3, 7);
    bool test4 = fanarray(arr4, 7);
    bool test5 = fanarray(arr5, 7);

    cout << "Test 1: "<< test1<<endl;
    
    cout << "Test 2: "<< test2<<endl;
    cout << "Test 3: "<< test3<<endl;
    cout << "Test 4: "<< test4<<endl;
    cout << "Test 5: "<< test5<<endl;

    return 0;
}

*/


bool fanarray(int array[], int n){
    int mid_index = n/2 + n%2 - 1 ; // if four element: mid_index=2
                               // if 5 elements: mid_index =3(only one)
   //cout << "The mid index is: "<< mid_index<<endl;
    bool flag = true;
    
    if (n<1) return false;

    // if n is odd 
    if (n%2 == 1) { 
        for (int i=0; i<mid_index; i++){
           if( array[i] > array[i+1]){
                return false;
           }
           if (array[i] !=array[n-i-1]){
                return false;
           }
        }
        for (int j=mid_index; j<n-1; j++){
            if ( array[j] <array[j+1]){
                return false;
            }
        }
    }   
    // if n is even number
    if (n%2 == 0) {
        //we have two mid_index 
        if (array[mid_index] != array[mid_index + 1] ) return false;
        for (int m=0; m<mid_index; m++){
            if (array[m] > array[m+1]) {
                return false;
            }
            if (array[m] != array[n-1-m]) {
                return false;
            }
        }
    }
    
    return flag;
 }
