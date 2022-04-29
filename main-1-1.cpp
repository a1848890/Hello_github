#include<iostream>
#include"Stock_item.h"
#include<string>

using namespace std;

int main(){
    Stock_item item1("Cola", 121);
    cout << "The number: " << item1.get_item_number() << endl;
    cout << "The description: " << item1.get_description() << endl;

    return 0;
}
