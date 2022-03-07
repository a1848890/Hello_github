#include<iostream>
using namespace std;
int sum_min_and_max(int integers[], int length);
int max_integer(int integers[], int length);
int min_integer(int integers[], int length);


/*
int main(){
    int a1[7] = {7,3,4,5,6,1,2};
    int a2[4] = {111,222,444,333};
    int a3[] = {};

    int sum1 = sum_min_and_max(a1,7);
    int sum2 = sum_min_and_max(a2,4);
    int sum3 = sum_min_and_max(a3,0);
    cout << "sum1: "<<sum1<<endl;
    cout << "sum2: "<<sum2<<endl;
    cout << "sum3: "<<sum3<<endl;
    return 0;
}
*/
int max_integer(int integers[], int length){
    //if (length < 1) return;
    int max_number = integers[0];
    for (int i=0; i<length; i++){
        if (integers[i] > max_number){
            max_number = integers[i];
        }
    }
    return max_number;
}


int min_integer(int integers[], int length){
    //if (length < 1) return;
    int min_number = integers[0];
    for (int i=0; i<length; i++){
        if (integers[i] < min_number){
            min_number = integers[i];
        }
    }
    return min_number;
}


int sum_min_and_max(int integers[], int length){
    int sum = 0;
    if (length < 1) {
        sum = -1;
    }
    else{
        int min_number = min_integer(integers, length);
        int max_number = max_integer(integers, length);
        sum = min_number + max_number;
    }
    return sum;
}












