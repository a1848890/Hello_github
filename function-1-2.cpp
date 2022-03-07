#include<iostream>
using namespace std;

int identity(int array[10][10]){
    int flag = 1;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (i == j && array[i][j] != 1) return 0;
            if (i != j && array[i][j] != 0) return 0;
        }
    }
    return flag;
}

/*
int main(){
    int a[10][10]  = {
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1},
    };
    int is_id = identity(a);
    cout << "The result is: "<< is_id<<endl;
    return 0;
}
*/