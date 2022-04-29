#pragma once
#include<string>
#include<iostream>

using namespace std;

class Stock_item{
private:
    std::string _description;
    int _code_number;

public:
    Stock_item();                  // a default constructor 
    
    // a constructor that takes the item description and the item code number as inputs
    Stock_item(std::string description, int code_number);      
    
    std::string get_description();    // returns the item description
    
    int get_item_number();       // returns the code number of the item
    
    ~Stock_item();               //A default destructor
    
};
/*
Stock_item :: Stock_item(){}

Stock_item ::Stock_item(std::string description, int code_number) : _description(description), _code_number(code_number){}

std::string Stock_item :: get_description(){
    return _description;
}

int Stock_item :: get_item_number(){
    return _code_number;
}

Stock_item :: ~Stock_item(){}
*/
