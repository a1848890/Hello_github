#include<iostream>
#include<stdlib.h>
#include<string>
#include"meerkat.h"
using namespace std;



int main(){
    meerkat m1;
    m1.setName("Kitty");
    //string m1_name = m1.getName();
    m1.setAge(10);
    //int m1_age = m1.getAge();
    
    meerkat m2;
    m2.setName("Kitkat");
   // string m2_name = m2.getName();
    m2.setAge(5);
    //int m2_age = m2.getAge();
    
    meerkat m3;
    m3.setName("Owl");
    //string m3_name = m3.getName();
    m3.setAge(4);
    //int m3_age = m3.getAge();
    
    
    meerkat m4;
    m4.setName("Kitty");
    //string m4_name = m4.getName();
    m4.setAge(10);
    //int m4_age = m4.getAge();
    
    
    
    // cout << "m1's age: " << m1_age << endl;
    //cout << "m1's name: " << m1_age << endl;

    return 0;
}
