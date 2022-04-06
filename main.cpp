#include"Book.h"
#include"Library.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    Book book1;
    book1.set_name("Problem Solving With C");
    
    cout << "Number:" << book1.get_number_in_stock() << endl;

    Library library1;
    library1.set_book_count(-2);

}
