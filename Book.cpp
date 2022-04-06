#include<iostream>
#include<string>
#include"Book.h"


Book::Book(){
    _number_in_stock = 10;
    _name = "";
    _reference_number = 0;
}

string Book :: get_name(){
    return _name;
}

void Book::set_name(string name){
    _name = name;
}

void Book::set_reference_number(int reference_number){
    _reference_number = reference_number;
}
int Book::get_reference_number(){
    return _reference_number;            
}


int Book::get_number_in_stock(){
    return _number_in_stock;
}

