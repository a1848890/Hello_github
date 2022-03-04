/*
#include<iostream>
using namespace std;
int count(int array[], int n, int number);

int main(){
    int test[10] = {0,4,2,7,0,4,8,9,8,4};
    int count_number = count(test, 10, 0);
    cout << "The count number is : " << count_number<< endl;
    return 0;
}

*/
int count(int array[], int n, int number){
    int cnt = 0;
    if (n<1) return cnt;
    for (int i=0; i<n; i++){
        if (array[i] == number) {
            cnt ++;
        }
    }
    return cnt;
}
