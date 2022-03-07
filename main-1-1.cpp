
#include<iostream>
using namespace std;

int diagonal(int array[4][4]);

int main(){
   int  arr[4][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
   int result = diagonal(arr);
   cout <<" result: "<< result << endl;
   return 0;
}

