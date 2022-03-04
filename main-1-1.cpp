
#include<iostream>
using namespace std;
int sum_array(int array[], int n);

int main(){
    int test[5] = {1,2,3,4,5};
    int result = sum_array(test, 5);
    cout << "The result is : "<< result <<endl;
    return 0;
}
