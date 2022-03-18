/*
Given an array of integers, write a function to calculate the sum of the elements if
it is a palindrome array. If it is not a palindrome array, your function must return -2.
Your function must call separate functions to check whether or not the array is a palindrome
and to calculate the sum of its elements.  If the length is 0 or negative each function must
return -1 or false as its result.
*/

/*

#include<iostream>
#include<stddef.h>
#include<string>
using namespace std;
int sum_if_a_palindrome(int integers[], int length);
bool is_a_palindrome(int integers[], int length);
int sum_elements(int integers[], int length);

int main(){
    int a1[7] = {1,2,3,4,3,2,1};
    int a2[6] = {5,6,7,7,6,5};
    int a3[8] = {1,2,1,2,1,2,1,2};
    int a4[] = {};

    int test1 = sum_if_a_palindrome(a1,7);
    int test2 = sum_if_a_palindrome(a2,6);
    int test3 = sum_if_a_palindrome(a3,8);
    int test4 = sum_if_a_palindrome(a4,0);

    cout << "test1: "<<test1<<endl;
    cout << "test2: "<<test2<<endl;
    cout << "test3: "<<test3<<endl;
    cout << "test4: "<<test4<<endl;

    return 0;
}
*/
int sum_elements(int integers[], int length){
    int sum = 0;
    for (int i=0; i<length; i++){
        sum += integers[i];
    }
    return sum;
}




bool is_a_palindrome(int integers[], int length){
    bool flag = true;
    if (length < 1) return false;
    
    int mid_point = 0;
    if (length%2 == 0){
        mid_point = length/2;
        for (int i=0; i<mid_point; i++){
            if (integers[i] != integers[length-i-1]) return false;
        }
    }

    if (length%2 == 1){    
        mid_point = length/2 + 1;
        for (int j=0; j<mid_point-1; j++ ){
            if (integers[j] != integers[length-j-1]) return false;
        }
    }

    return flag;
}




int sum_if_a_palindrome(int integers[], int length){
    int sum = 0;
    bool is_pali = is_a_palindrome(integers,length);
    if (is_pali){
        sum = sum_elements(integers, length);
    }
    else{
        sum = -2;
    }
    return sum;
}
