#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int *readNumbers();
int secondSmallestSum(int *numbers,int length);


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
    int secondlarge = secondSmallestSum(arr, length);
    cout << secondlarge << endl;
    return 0;
}




int* readNumbers(){
    int* arr_pointer = nullptr;
    arr_pointer = new int[10];
    int i=0;
    while (i<10) {
        cin >> *(arr_pointer + i);
        i++;
    }
    return arr_pointer;
}



int secondSmallestSum(int *numbers,int length){
    int sum = 0;
    int count = 0;
    int sum_arr[1000] = {0};
    for (int i=0; i<length; i++){
        for (int j=i; j<length; j++){
            for (int m=i; m<j; m++){
                sum += *(numbers+m);
                sum_arr[count] = sum;
                count ++;
                cout << "count = " << count<< endl;
            }
            sum = 0;
        }
    }
    for (int i=1; i<1000; i++){
        int j;
        for (j=i-1; j>=0 && sum_arr[j+1]<sum_arr[j]; j--){
            std::swap(sum_arr[j], sum_arr[j+1]);
        }
    }
    return sum_arr[98];
}




