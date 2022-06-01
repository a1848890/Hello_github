#include<iostream>
#include<string>
#include"animal.h"
#include"vegie.h"

using namespace std;



int vegie :: nextID = 100;

vegie :: vegie(string n, int v): animal(n, v){
    animalID = nextID ++;
}

void vegie :: set_favourite_food(string the_favourite_food){
    favourite_food = the_favourite_food;
}

string vegie :: get_favourite_food(){
    return favourite_food;
}



string vegie :: get_name(){
    string prefix = "Safe: ";
    return prefix + name;
}
