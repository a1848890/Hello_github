#pragma once
#include<iostream>
#include<string>

using namespace std;

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


