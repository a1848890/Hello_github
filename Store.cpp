#include"Stock_item.h"
#include"Store.h"
#include<iostream>
#include<string>

using namespace std;
/*

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
*/
Store :: Store(){}

Store :: Store(int capacity) : _capacity(capacity){}

int Store :: get_total_stock_count(){
    int stock_count = 0;
    for (int i=0; i<_capacity; i++){
        if (items[i].get_item_number() != 0){
            stock_count++;
        }
    }
    return stock_count;
}


int Store :: get_stock_quantity(int item_number){
    int stock_quantity = 0;
    for (int i=0; i<_capacity; i++){
        if (items[i].get_item_number() == item_number){
            stock_quantity++;
        }
    }
    return stock_quantity;
}


Stock_item* Store::get_current_stock_list(){
    return items;
}



bool Store :: add_stock(Stock_item new_stock){
    int stock_count = 0;
    for (int i=0; i<_capacity; i++){
        if (items[i].get_item_number() != 0){
            stock_count++;
        }
    }

    if (stock_count < _capacity) {
        items[stock_count] = new_stock;
        return 1;
    }
    else return 0;
}


Store:: ~Store(){}
