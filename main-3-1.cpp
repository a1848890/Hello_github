
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
bool equalsArray(int *numbers1,int *numbers2,int length);


int main(){
    //cout << "please enter the first array\n";
    int* arr1 = readNumbers();
    //cout << "please enter the second array\n";
    int* arr2 = readNumbers();
    int length = 10;
    bool flag = equalsArray(arr1,arr2,length);
    cout << flag <<endl;
    delete [] arr1;
    delete [] arr2;
    
    return 0;
}

