#pragma once
#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"

using namespace std;

class zoo {
private:
    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals ;                     // the zoo's animal
public:
    zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
    string get_name();
    int get_number_of_animals();
    animal** get_animals();
};
/*
Zoo :: Zoo(string n, int cows, int lions){
    name = n;
    number_of_animals = cows + lions;
    animals = new ainmals*[cows+lions];
}

string Zoo :: get_name(){
    return name;
}

int Zoo :: get_number_of_animals(){
    return number_of_animals;
}

animal** Zoo::get_animals(){
    return animals;
}

Zoo::~Zoo(){
    delete [] animals;
}
*/

