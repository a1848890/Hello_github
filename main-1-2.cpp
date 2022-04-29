#include<iostream>
#include"Stock_item.h"
#include"Store.h"
#include<string>

using namespace std;

int main(){
    Stock_item item1("Cola", 12);
    Stock_item item2("Solo", 16);
    Stock_item item3("Icebrek", 22);
    Stock_item item4("Dare", 55);
    Stock_item item5("Dare", 55);

    Store my_store(10);

    bool is_add1 = my_store.add_stock(item1);
    bool is_add2 = my_store.add_stock(item2);
    bool is_add3 = my_store.add_stock(item3);
    bool is_add4 = my_store.add_stock(item4);


    int my_stock_count = my_store.get_total_stock_count();
    cout << "my_stock_count: " << my_stock_count << endl;

    int my_stock_quantity = my_store.get_stock_quantity(55);
    cout << "my_stock_quantity: " << my_stock_quantity << endl;


    Stock_item* my_store_list = my_store.get_current_stock_list();
    for (int i=0; i<my_stock_count; i++){
        cout << my_store_list[i].get_description() << " ";
    }
    cout << endl;

    return 0;
}
