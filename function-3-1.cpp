#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);

/*
int main(){
    //cout << "please enter the first array\n";
    int* arr1 = readNumbers();
    //cout << "please enter the second array\n";
    int* arr2 = readNumbers();
    int length = 10;
    bool flag = equalsArray(arr1,arr2,length);
    cout << flag <<endl;
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





