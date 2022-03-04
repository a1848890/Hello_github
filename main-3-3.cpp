#include<iostream>
using namespace std;
double weightedaverage(int array[], int n);



int main(){
    int arr[6] = {1,2,1,4,1,3};
    double weighted_ave_num = weightedaverage(arr,6);
    cout << "The result is: "<< weighted_ave_num<< endl;
    return 0;
}