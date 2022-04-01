#include<iostream>
using namespace std;

int *shift_right(int *vals, int len, int amount);
/*
int main(){
    //int vals[] = {1,2,3,4,5};
    
    int vals1[] = {5,4,3,2,1,1};
    
    int *sv = shift_right(vals1, 6, 3);
    for (int i=0; i<6; i++){
        cout << *(sv+i) << " " ;
    }
    cout<<endl;

    return 0;
}
*/

int *shift_right(int *vals, int len, int amount){
    int* array_pointer = new int[len];
    for (int i=0; i<amount; i++){
        *(array_pointer + i) = 0;
    }
    
    for (int i=amount; i<len; i++){
        *(array_pointer+i) = *(vals + i - amount);
    }

    return array_pointer;
}
