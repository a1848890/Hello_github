
#include<iostream>
using namespace std;
int count(int array[], int n, int number);

int main(){
    int test[10] = {0,4,2,7,0,4,8,9,8,4};
    int count_number = count(test, 10, 0);
    cout << "The count number is : " << count_number<< endl;
    return 0;
}