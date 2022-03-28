#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);
int *reverseArray(int *numbers1,int length);

/*
int main(){
    int* numbers1 = readNumbers();
    int length = 10;
    int* reverse_arr = reverseArray(numbers1, length);
    bool is_equal = equalsArray(numbers1, reverse_arr, length);
    cout << is_equal << endl;
    return 0;
}
*/


int* readNumbers(){
    int* arr_pointer = nullptr;
    arr_pointer = new int[10];
    int i=0;
    while (i<10) {
        cin >> *(arr_pointer + i);
        i++;
    }

    return arr_pointer;
}




bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1) return false;
    bool is_equal = true;
    for (int i=0; i<length; i++){
        if (*(numbers1+i) != *(numbers2+i)){
            is_equal = false;
            break;
        }
    }
    return is_equal;
}




int *reverseArray(int *numbers1,int length){
    int* reverse_arr = new int[length];
    for (int i=0; i<length; i++){
        *(reverse_arr + i) = *(numbers1 + length - i - 1);
    }
    return reverse_arr;
}

