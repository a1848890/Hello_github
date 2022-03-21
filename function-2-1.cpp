#include<iostream>
#include<stddef.h>
using namespace std;

void print_sevens(int *nums,int length);
/*
int main(){
    int array1[10] = {1,3,5,7,9,14,33,45,49,777};
    print_sevens(array1, 10);

    return 0;
}
*/

void print_sevens(int *nums,int length){
    for (int i=0; i < length; i++){
        if ((*(nums+i))%7 == 0) cout << *(nums+i) << endl;
    }
}
