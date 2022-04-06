#include<string>
#include"person.h"
using namespace std;
/*
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
*/

person :: person(string myName, int Salary) : _myName(myName), _Salary(Salary)
{
}

void person::setName(string myName){
    _myName = myName;
}

string person :: getName(){
    return _myName;
}

void person::setSalary(int mySalary){
    _Salary = mySalary;
}

int person::getSalary(){
    return _Salary;
}


