#include<iostream>
#include<stdlib.h>
#include<string>
#include"meerkat.cpp"
using namespace std;



int main(){
    meerkat m1;
    m1.setName("Kitty");
    string m1_name = m1.getName();
    m1.setAge(10);
    int m1_age = m1.getAge();

    cout << "m1's age: " << m1_age << endl;
    cout << "m1's name: " << m1_age << endl;

    return 0;
}


