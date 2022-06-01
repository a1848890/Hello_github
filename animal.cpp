#include<iostream>
#include<string>
#include"animal.h"

using namespace std;



animal :: animal(string n, int v) : name(n), volume(v){}
        
void animal :: set_volume(int the_volume){
    the_volume = volume;
}

void animal :: set_name(string the_name){
    name = the_name;
}
//string Animal :: get_name(){
//    return name;
//}
int animal :: get_animalID(){
    return animalID;
}
int animal :: get_volume(){
    return volume;
}

animal :: ~animal(){}

