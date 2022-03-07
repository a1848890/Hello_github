#include<iostream>
using namespace std;
/*
int diagonal(int array[4][4]);

int main(){
   int  arr[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
   int result = diagonal(arr);
   cout <<" result: "<< result << endl;
   return 0;
}
*/


int diagonal(int array[4][4]){
    int sum = 0;
    sum = array[1][1] + array[2][2] + array[3][3] + array[0][0];
    return sum;
}
