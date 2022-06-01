
#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"

using namespace std;
/*
 
using namespace std;

class Animal{
    protected:
        string name;
        int animalID;
        int volume;
    public: 
        Animal(string n, int v);
        
        void set_volume(int the_volume);
        void set_name(string the_name);
        
        virtual string get_name() = 0;
        int get_animalID();
        int get_volume();

        ~Animal();
};
*/


/*
class Hunter : public Animal{
    private:
        static int nextID;
        int kills;
    public:
       void get_name();
        Hunter(string n, int v);
        int get_kills();
        void set_kills();
};
 */

/*
class Vegie : public Animal{
    private:
        string favourite_food;
        static int nextID;
    public:
        vegie(string n,int v);
        void set_favourite_food(string the_favourite_food);
        string get_favourite_food();
        string get_name();
};
*/

/*

class Zoo {
private:
    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals ;                     // the zoo's animal
public:
    Zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
    string get_name();
    int get_number_of_animals();
    animal** get_animals();
    ~Zoo();
};
 * */

int main(){
    zoo my_zoo("The_name_of_zoo", 50, 50);
    animal** animals_array = my_zoo.get_animals();
    for (int i=0; i<50; i++){
        vegie *cow = new vegie("Daisy", 100);
        animals_array[i] = cow;
       // cout << (*animals_array[i]).get_animalID() << endl;
    }
    cout << "++++++++++++++++++++++++++++++++++\n";

    for (int i=0; i<50; i++){
        hunter *lion = new hunter("Clarence", 50);
        animals_array[50+i] = lion;
    }

    cout << (*animals_array[67]).get_name() << endl;
    cout << (*animals_array[67]).get_animalID() << endl;
    cout << (*animals_array[17]).get_name() << endl;

    cout << (*animals_array[17]).get_animalID() << endl;
    cout << (*animals_array[18]).get_animalID() << endl;
    return 0;
}

