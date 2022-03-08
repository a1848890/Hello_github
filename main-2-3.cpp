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
