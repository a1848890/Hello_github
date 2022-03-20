// MAX SUBARRAY SUM
#include<iostream>
#include<math.h>
using namespace std;

int maximum_sum(int *nums,int length);
/*
int main(){
    int arr1[10] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int maxi = maximum_sum(arr1,10);
    cout << maxi << endl;
    return 0;
}
*/

/*

int maximum_sum(int *nums,int length){
    int sum = 0;
    int temp = 0;
    int final_max = 0;
    for (int j=0; j<length; j++){
        for (int i=0; i<=j; i++){
            for (int t=i; t<=j; t++){
              //  cout << *(nums+t)<< "  ";
                sum += *(nums+t);
            }
            temp = sum;
            sum = 0;
            //cout << "******* max = "<< max<<" *******"<<endl;
            if (final_max < temp) final_max = temp;
        }
    }
    return final_max;
}
*/



int maximum_sum(int *nums,int length){
    int sum = *nums;
    int temp;
    int max_value = 0;
    for (int i=1; i<length; i++){
        sum += *(nums + i);
        if (sum < *(nums+i)){
            sum = *(nums+i); 
        }
        else{  // sum >= temp
            temp = sum;
        }
        if (temp > max_value) max_value = temp;
    }
    return max_value;

}






