#include<iostream>
#include<string>
#include"Orchestra.h"
#include"Musician.h"
using namespace std;
/*
class Musician{
private:
    string _instrument;
    int _experience;
public:
    Musician();          // a default constructor
    // a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);
    std::string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
    ~Musician();//A default destructor
};


class Orchestra{
private:
    int _size;
    Musician _person[100];     
public:
    Orchestra();            // default constructor
    Orchestra(int size);    // constructor for an orchestra of given size
    int get_current_number_of_members(); // returns the number of musicians who have joined the orchestra
    bool has_instrument(std::string instrument); // returns true if any musician in the orchestra plays the specified instrument
                                                 // otherwise returns false

    Musician *get_members();        // returns the array of members of the orchestra
    bool add_musician(Musician new_musician); // returns true and adds new musician to the orchestra if the orchestra is not full
                                              // otherwise returns false
    ~Orchestra();   
};
*/
Orchestra :: Orchestra():_size(0){}

Orchestra :: Orchestra(int size):_size(size){}

int Orchestra :: get_current_number_of_members(){
    int number_of_members = 0;
    for (int i=0; i<_size; i++){
        if (_person[i].get_experience()){
            number_of_members++;
        }
        else break;
    }
    return number_of_members;
}

bool Orchestra :: has_instrument(std::string instrument){
    bool flag = 0;
    for(int i=0; i<_size; i++){
        if (_person[i].get_instrument() == instrument)
            flag = 1;
    }

    return flag;
}

Musician* Orchestra :: get_members(){
    return _person;
}

bool Orchestra :: add_musician(Musician new_musician){
    int count=0;
    for(int i = 0; i<_size; i++){
        if (_person[i].get_experience()) count++;
        else break;
    }
    
    if (count == _size) return false;
    else {
        _person[count] = new_musician;
    }
    return true;
}

Orchestra :: ~Orchestra(){}


/*
int main(){
        
    Musician person1 = Musician("Jazz_drum", 31);
    Musician person2 = Musician("Bass", 44);
    Musician person3 = Musician("Guitar", 35);
    Musician person4 = Musician("Piano", 43);
    Musician person5 = Musician("E_guitar", 32);

    Orchestra It_is_on(5);
    bool add1 = It_is_on.add_musician(person1);
    bool add2 = It_is_on.add_musician(person2);
    bool add3 = It_is_on.add_musician(person3);
    bool add4 = It_is_on.add_musician(person4);
    bool add5 = It_is_on.add_musician(person5);
    
    Musician* list_of_person = It_is_on.get_members();

    bool has_Guitar = It_is_on.has_instrument("Git");

    for (int i=0; i<7; i++){
        cout << (*(list_of_person+i)).get_instrument() << "  ";
    }
    cout << "\n";
    cout << "has_Guitar : " <<has_Guitar << endl; 
    
    
    return 0;
}

*/
