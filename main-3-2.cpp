
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);
int *reverseArray(int *numbers1,int length);


int main(){
    int* numbers1 = readNumbers();
    int length = 10;
    int* reverse_arr = reverseArray(numbers1, length);
    bool is_equal = equalsArray(numbers1, reverse_arr, length);
    cout << is_equal << endl;
    delete [] numbers1;
    delete [] reverse_arr;

    return 0;
}

