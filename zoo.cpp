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
