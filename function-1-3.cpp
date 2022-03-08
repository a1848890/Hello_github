#include<iostream>
using namespace std;

void count_numbers(int array[4][4]){
    int number_of_zero = 0;
    int number_of_one = 0;
    int number_of_two= 0;
    int number_of_three = 0;
    int number_of_four = 0;
    int number_of_five = 0;
    int number_of_six = 0;
    int number_of_seven = 0;
    int number_of_eight= 0;
    int number_of_nine= 0;
    
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (array[i][j] == 0) number_of_zero ++;
            if (array[i][j] == 1) number_of_one ++;
            if (array[i][j] == 2) number_of_two++;
            if (array[i][j] == 3) number_of_three ++;
            if (array[i][j] == 4) number_of_four ++;
            if (array[i][j] == 5) number_of_five ++;
            if (array[i][j] == 6) number_of_six ++;
            if (array[i][j] == 7) number_of_seven++;
            if (array[i][j] == 8) number_of_eight ++;
            if (array[i][j] == 9) number_of_nine ++;
        }
    }
    cout <<"0:"<<number_of_zero<<";"<<"1:"<<number_of_one<<";"<<"2:"<<number_of_two<<";"<<"3:"<<number_of_three<<";"<<"4:"<<number_of_four<<";"<<"5:"<<number_of_five<<";"<<"6:"<<number_of_six<<";"<<"7:"<<number_of_seven<<";"<<"8:"<<number_of_eight<<";"<<"9:"<<number_of_nine<<";"<<endl;
}
