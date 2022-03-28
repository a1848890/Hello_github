
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
void printNumbers(int *numbers,int length);

int main(){
    int* array = readNumbers();
    int length = 10;
    printNumbers(array, length);
    delete [] array;
    return 0;
}

