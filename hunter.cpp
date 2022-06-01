#include<iostream>
#include<string>
#include"hunter.h"
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
/*
class Hunter : public Animal{
    private:
        static int nextID;
        int kills;
    public:
       string get_name();
        Hunter(string n, int v);
        int get_kills();
        void set_kills(int the_kills);
        static int get_nextID();}
};
*/

hunter :: hunter(string n, int v) : animal(n,v){
    animalID = nextID++;
     kills = 0;
}

int hunter :: nextID = 1000;

string hunter :: get_name(){
    string prefix = "Hunter: ";
    return prefix + name; // What does prefixed "Hunter:" means? 
}

void hunter :: set_kills(int the_kills){
    kills = the_kills;
}
int hunter :: get_kills(){
    return kills;
}


