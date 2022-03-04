/*
#include<iostream>
using namespace std;
int count_even(int number);


int main(){
    int test1 = count_even(2);
    int test2 = count_even(3);
    int test3 = count_even(4);
    int test4 = count_even(5);

    int test5 = count_even(6);
    int test6 = count_even(7);
    cout << "test1 = "<<test1<<endl;
    cout << "test2 = "<<test2<<endl;
    cout << "test3 = "<<test3<<endl;
    cout << "test4 = "<<test4<<endl;
    cout << "test5 = "<<test5<<endl;
    cout << "test6 = "<<test6<<endl;
    return 0;
}
*/

int count_even(int number){
    int count = 0;
    if (number < 1) return count;
    for (int i=1; i<=number; i++){
        if (i%2 == 0) count ++;
    }
    return count;
}
