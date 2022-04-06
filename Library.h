#pragma once

#include<string>
#include"Book.h"
using namespace std;

class Library{
    private:
        Book _book_in_library;
        //int _book_count;
        int _add_book_count;
    public:
        //void return_Book(Book _book_in_library, int number);
        int get_book_count(Book _book_in_library);
        void set_book_count(int add_book_count);
};

