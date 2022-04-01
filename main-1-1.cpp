
#include<iostream>
using namespace std;

int *shift_right(int *vals, int len, int amount);

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

