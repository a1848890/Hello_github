#include<iostream>
#include<string>
#include<stddef.h>
#include"person.h"
#include"aircraft.h"
using namespace std;
/*  class person{
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
class aircraft{
private:
    string _callsign;
    person _thePilot;
    person _theCoPilot;
public:
    // a pilot and copilot must be provided when creating an aircraft
    aircraft(string callsign,person thePilot,person theCoPilot);
    void setPilot(person thePilot);      // change the pilot
    person getPilot();
    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
                                         // a new line, the co-pilot name and a final newline.
};  */
int main(){
        
    person p1("AA", 11);
    
    person p2("BB", 22);

    person p3("CC", 33);
    
    aircraft an_aircraft("MayDay",p1, p2);
    
    an_aircraft.printDetails();

    an_aircraft.setPilot(p3);
    
    an_aircraft.printDetails();

    return 0;
}
