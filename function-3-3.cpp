/*
#include<iostream>
using namespace std;
double weightedaverage(int array[], int n);



int main(){
    int arr[6] = {1,2,1,4,1,3};
    double weighted_ave_num = weightedaverage(arr,6);
    cout << "The result is: "<< weighted_ave_num<< endl;
    return 0;
}

*/
double weightedaverage(int array[], int n){
    // Basically the algorihm is:
    // the sum of (number_of_appear/total_number)*value
    
    for (int j=n-1; j>0; j--){
        for (int i=0; i<j-1; i++){
            if(array[i]>array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
    double sum_ave;
    for (int m=0; m<n-1; m++){
        int count = 0;
        count ++;
        if (array[m] != array[m+1]){
            break;
        }
        double partial = (count/n)*array[m];
        sum_ave += partial;
        //cout<<"IN func, count:"<<count<<endl;
    }
    return sum_ave;
}



