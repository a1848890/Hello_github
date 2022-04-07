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
};
*/
#include<string>
#include"person.h"
#include"aircraft.h"
#include<iostream>

using namespace std;

aircraft::aircraft(string callsign,person thePilot,person theCoPilot):_callsign(callsign),_thePilot(thePilot),_theCoPilot(theCoPilot){}


void aircraft::setPilot(person thePilot){
    _thePilot = thePilot;
}


person aircraft::getPilot(){
    return _thePilot;
}


void aircraft::setCoPilot(person theCoPilot){
    _theCoPilot = theCoPilot;
}

person aircraft::getCoPilot(){
    return _theCoPilot;
}

void aircraft::printDetails(){
    cout << _callsign << endl;
    
    string Pilot_name = _thePilot.getName();
    cout << Pilot_name << endl;
    
    string CoPilot_name =  _theCoPilot.getName();
    cout << CoPilot_name << endl;

}


