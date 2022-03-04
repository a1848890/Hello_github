/*
#include<iostream>
using namespace std;
void twofivenine(int array[], int n);

int main(){
    int test1[11] = {0,4,2,7,0,4,8,9,8,4,5};
    int test2[8] = {2,2,2,5,5,5,9,9};
    int test3[] ={};

    twofivenine(test1,11);
    twofivenine(test2,8);
    twofivenine(test3,0);
    return 0;
}
*/

#include<iostream>
using namespace std;

void twofivenine(int array[], int n){
    
    int number_of_two = 0;
    int number_of_five = 0;
    int number_of_nine = 0;
    for (int i=0; i<n; i++){
        int member = array[i];
        switch (member){
        case 2:
            number_of_two ++;
            break;
        case 5:
            number_of_five++;
            break;
        case 9:
            number_of_nine++;
        default:
            break;
        }
    }
    if (n<1){
        return;
    }
    
    cout << "2:"<<number_of_two<<";"<<"5:"<<number_of_five<<";"<<"9:"<<number_of_nine<<";\n\n";
}
