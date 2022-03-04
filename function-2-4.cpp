/*
#include<iostream>
using namespace std;

bool ascending(int array[], int n);

int main(){
    int test1[10] = {0,4,2,7,0,7,8,9,8,4};
    int test2[5] = {1,2,3,4,5};
    int test3[] = {};
    bool result1 = ascending(test1, 10);
    bool result2 =  ascending(test2, 5);
    bool result3 =  ascending(test3, 0);
    cout << result1<< endl;
    cout << result2<< endl;
    cout << result3<< endl;
    return 0;
}

*/


bool ascending(int array[], int n){
    bool flag = true;
    if (n<1) return false;
    for (int i=0; i<n-1; i++){
        if (array[i] > array[i+1]){
            flag = false;
            break;
        }
    }
    return flag;

}
