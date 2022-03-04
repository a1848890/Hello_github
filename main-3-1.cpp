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
