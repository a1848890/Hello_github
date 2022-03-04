/*
#include<iostream>
using namespace std;
int  median(int array[], int n);

int main(){
    int array[10] = {0,4,2,7,0,4,8,9,8,4};
    int median_value =  median(array, 10);
    
    int array1[9] = {9,8,7,6,5,4,3,1,2};
    int median1_value = median(array1, 9);

    cout << "median: " << median_value << endl;
    cout << "median1:" << median1_value << endl;

    return 0;
}
*/

int median(int array[], int n){
    for(int j=n; j>0; j--){  // use bubble sort to sort the array;
        for (int i=0; i<j-1; i++){
            if (array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
     }
    
    int med_index = n/2 - 1 + n%2;
    return array[med_index];

}
