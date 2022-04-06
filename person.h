#pragma once

#include<string>
using namespace std;

class person{
private:
    string _myName;
    int _Salary;
public:
    person(string myName,int Salary); // a name and salary must be provided to create a person
    void setName(string myName);      // change the person's name
    string getName();
    void setSalary(int mySalary);     // change the person's salary
    int getSalary();
};
