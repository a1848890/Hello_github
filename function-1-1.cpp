#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
void printNumbers(int *numbers,int length);
/*
int main(){
    int* array = readNumbers();
    int length = 10;
    printNumbers(array, length);
    delete [] array;
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





void printNumbers(int *numbers,int length){
    for (int i=0; i<length; i++){
        cout << i << " "<< *(numbers + i) << endl;
    }
}



