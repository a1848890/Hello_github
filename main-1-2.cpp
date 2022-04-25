#include<iostream>
#include<string>
#include"Musician.h"
#include"Orchestra.h"

using namespace std;


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

    bool has_Guitar = It_is_on.has_instrument("Guitar");
    bool has_Unknown = It_is_on.has_instrument("Unknown");

    cout << "\nMusician added, see instruments: \n";
    for (int i=0; i<7; i++){
        cout << (*(list_of_person+i)).get_instrument()/*Error*/ << "  ";
    }
    cout << "\n\n";
    cout << "has_Guitar : " <<has_Guitar << endl; 
    cout << "has_Unknown: " <<has_Unknown << endl;
    
    return 0;
}


