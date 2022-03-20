
#include<iostream>
#include<string>
#include<stddef.h>

using namespace std;
void copy_2d_strings(std::string first[][2], std::string second[][2], int n);
//void printArray(std::string second[][2], int n);

int main(){

    string array1[3][2] = {{"fat","cat"},{"sat","mat"},{"bat", "cat"}};
    string array2[3][2];
    copy_2d_strings(array1,array2,3);
    printArray(array2, 3);
    return 0;
}



