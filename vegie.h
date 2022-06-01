#pragma once
#include<iostream>
#include"animal.h"
#include<string>

using namespace std;


/*
class Animal{
    protected:
        string name;
        int animalID;
        int volume;
        
        Animal(string n, int v);
        
        void set_volume(int the_volume);
        void set_name(string the_name);
        
        virtual string get_name() = 0;
        int get_animalID();
        int get_volume();

        ~Animal();
};

*/



class vegie : public animal{
    private:
        string favourite_food;
        static int nextID;
    public:
        vegie(string n,int v);
        void set_favourite_food(string the_favourite_food);
        string get_favourite_food();
        string get_name();
        static int get_nextID(){
            return nextID;
        }
};

/*
Vegie :: nextID = 100;

Vegie :: Vegie(string n, int v){
    animalID = nextID ++;
    name = n;
    volume = v;
}

void Vegie :: set_favourite_food(string the_favourite_food){
    favourite_food = the_favourite_food;
}

string Vegie :: get_favourite_food(){
    return favourite_food;
}

string get_name(){
    cout << "Safe: ";
    return name;
}
*/
