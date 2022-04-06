#include"Library.h"
#include"Book.h"
#include<string>

using namespace std;



int Book::get_book_count(Book _book_in_library){
    int count = _book_in_library.get_number_in_stock();
    return count;
}
void Book::set_book_count(int add_book_count){
    _book_count += add_book_count;
}
