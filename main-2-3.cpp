#include<iostream>
using namespace std;
void twofivenine(int array[], int n);

int main(){
    int test1[11] = {0,4,2,7,0,4,8,9,8,4,5};
    int test2[8] = {2,2,2,5,5,5,9,9};
    int test3[] ={};

    twofivenine(test1,11);
    twofivenine(test2,8);
    twofivenine(test3,0);
    return 0;
}