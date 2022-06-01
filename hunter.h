#pragma once

#include<iostream>
#include<string>
#include"animal.h"

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
*/

class hunter : public animal{
    private:
        static int nextID;
        int kills;
    public:
       string get_name();
        hunter(string n, int v);
        int get_kills();
        void set_kills(int the_kills);
        static int get_nextID(){
            return nextID;
        }
};
