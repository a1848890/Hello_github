#include<iostream>
using namespace std;
void count_numbers(int array[4][4]);

int main(){
    int a[4][4] = {
        {1,2,1,2}, {0,0,0,0},{9,8,7,6},{5,6,4,3}
    };
    count_numbers(a);
    return 0;
}