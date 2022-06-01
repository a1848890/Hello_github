
#pragma once
#include<iostream>
#include<string>

using namespace std;

class animal{
    protected:
        string name;
        int animalID;
        int volume;
    public: 
        animal(string n, int v);
        
        void set_volume(int the_volume);
        void set_name(string the_name);
        
        virtual string get_name() = 0;
        int get_animalID();
        int get_volume();

        ~animal();
};
