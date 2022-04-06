#pragma once
#include<string>
using namespace std;

class Book{
    private:
        int _reference_number;
        string _name;
        int _number_in_stock;
    public:
        Book();
        string get_name();
        void set_name(string name);
        void set_reference_number(int reference_number);
        int get_reference_number();
        //~Book();
        int get_number_in_stock();
        //int get_reference_number_from_name(string name); 
};

