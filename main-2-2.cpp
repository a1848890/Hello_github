
// MAX SUBARRAY SUM
#include<iostream>
#include<math.h>
using namespace std;

int maximum_sum(int *nums,int length);

int main(){
    int arr1[10] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int maxi = maximum_sum(arr1,10);
    cout << maxi << endl;
    return 0;
}
