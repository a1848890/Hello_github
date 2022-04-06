#include<string>
#include<iostream>
#include"person.h"
using namespace std;

int main(){
    person p1("ABC", 10000);
    p1.setName("Alice");
    p1.setSalary(400000);
    p1.getName();
    p1.getSalary();
    
    person p2("ABC", 10000);
    p2.setName("YLJ");
    p2.setSalary(2000000);
    p2.getName();
    p2.getSalary();
    
    person p3("ABC", 10000);
    p3.setName("Anachui");
    p3.setSalary(10000000);
    p3.getName();
    p3.getSalary();

    person p4("ABC", 10000);
    p4.setName("Jian");
    p4.setSalary(12);
    p4.getName();
    p4.getSalary();
    
    return 0;
}
