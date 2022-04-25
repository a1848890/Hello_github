#include<iostream>
#include"Musician.h"
#include<string>

using namespace std;

Musician :: Musician():_experience(0), _instrument(" ") {}                   // a default constructor



// a constructor that takes the instrument played and the years of experience
Musician::Musician(std::string instrument, int experience){
       _instrument = instrument;
       _experience = experience;
}

std::string Musician::get_instrument(){
    return _instrument;
}    // returns the instrument played


int Musician :: get_experience(){
    return _experience;
}       // returns the number of years experience


Musician :: ~Musician(){}               //A default destructor
