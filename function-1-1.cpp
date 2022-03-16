#include<iostream>
/*
void printer(int array[10][10]);

int main(){
    int array[10][10] = {{}};
    printer(array);
    return 0;
}
*/

void printer(int array[10][10]){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (j == 9)
                std::cout<<array[i][j]<<std::endl;
            else{
                std::cout << array[i][j]<<" ";
            }
        }
    }
}
