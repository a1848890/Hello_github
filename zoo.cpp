#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"

using namespace std;




zoo :: zoo(string n, int cows, int lions){
    name = n;
    number_of_animals = cows + lions;
    animals = new animal* [cows+lions];
    for (int i=0; i<cows; i++){
        animal *cow = new vegie("Daisy", 100);
        animals[i] = cow; // animals is an array of pointers to animal
                          //*animals or animals[i] is pointers to animal
    }

    for (int i=0; i<lions; i++){
        animal *lion = new hunter("Clarence", 50);
        animals[cows+i] = lion;
    }
}

string zoo :: get_name(){
    return name;
}

int zoo :: get_number_of_animals(){
    return number_of_animals;
}

animal** zoo::get_animals(){
    return animals;
}
