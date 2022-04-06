#include<iostream>
#include"meerkat.h"
#include"cart.h"
using namespace std;

cart::cart():_available(4){
}


bool cart::addMeerkat(meerkat cat){
    //bool flag = false;
    if (_available <=0) return 0;
    else if (_available == 1) {
        meerkat4 = cat;
        _available--;
    }
    else if (_available == 2) {
        meerkat3 = cat;
        _available --;
    }
    else if (_available == 3){
        meerkat2 = cat;
        _available --;
    }
    else if (_available == 4) {
        meerkat1 = cat;
        _available --;
    }
    //flag = true;
    return 1;
}

void cart::emptyCart(){
    _available = 4;
}
