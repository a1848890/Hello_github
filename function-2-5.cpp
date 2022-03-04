/*
#include<iostream>
using namespace std;

bool descending(int array[], int n);

int main(){
    int test1[10] = {0,4,2,7,0,7,8,9,8,4};
    int test2[5] = {5,4,3,2,1};
    int test3[] = {};
    bool result1 = descending(test1, 10);
    bool result2 =  descending(test2, 5);
    bool result3 =  descending(test3, 0);
    cout << result1<< endl;
    cout << result2<< endl;
    cout << result3<< endl;
    return 0;
}
*/


bool descending(int array[], int n){
    bool flag = true;
    if (n<1) return false;
    for (int i=0; i<n-1; i++){
        if (array[i] < array[i+1]){
            flag = false;
            break;
        }
    }
    return flag;

}
