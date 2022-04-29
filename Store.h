#pragma once
#include"Stock_item.h"
#include<string>
#include<iostream>

using namespace std;

class Store{
    private:
        int _capacity;
        Stock_item items[1000];
    public:
        Store();           // default constructor
    
        // constructor for a store that can have up to capacity number of items
        Store(int capacity);

        // returns the number items currently stocked
        // note that if more than one of the same item is in stock they are *all* counted
        // i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
        int get_total_stock_count();

        // returns the total count of items in stock with the given item number
        // i.e. if there are 3 widgets (with the given item_number in stock then it will return 3.
        int get_stock_quantity(int item_number);

        // returns the array of all items in stock.
        // i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
        Stock_item *get_current_stock_list();

        // returns true and adds new_stock to the store if the store has enough capacity
        // otherwise returns false
        bool add_stock(Stock_item new_stock);

        ~Store();

};
