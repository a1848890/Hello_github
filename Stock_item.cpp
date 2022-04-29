#include<string>
#include"Stock_item.h"
#include<iostream>

using namespace std;


Stock_item :: Stock_item(){}

Stock_item ::Stock_item(std::string description, int code_number) : _description(description), _code_number(code_number){}

std::string Stock_item :: get_description(){
    return _description;
}

int Stock_item :: get_item_number(){
    return _code_number;
}

Stock_item :: ~Stock_item(){}
