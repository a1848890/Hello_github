#include<iostream>
using namespace std;
void print_scaled_matrix(int array[3][3],int scale);

int main(){
    int a[3][3] = {
        {0,1,2}, {3,4,5},{6,7,8}
    };
    print_scaled_matrix(a,3);
    return 0;
}
