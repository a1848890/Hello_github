#ifndef CART_H_
#define CART_H_
#include"meerkat.h"
using namespace std;
#include<string>

class cart {
    public:
         int _available;
        meerkat meerkat1;
        meerkat meerkat2;
        meerkat meerkat3;
        meerkat meerkat4;

        cart();                         // create an empty cart object
        bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
        void emptyCart();               // remove all meerkats from the cart
        void printMeerkats();           // print the name, a space, the age, then a new line
        ~cart();                                // for each meerkat in the order they were added
};

#endif
