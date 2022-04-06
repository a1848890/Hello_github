#include<iostream>
#include"meerkat.h"
#include"cart.h"
using namespace std;

cart::cart():_available(4){
}


bool cart::addMeerkat(meerkat cat){
    bool flag = false;
    if (_available <=0) return flag;
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
    flag = true;
    return flag;
}



void cart::emptyCart(){
    _available = 4;
}


void cart::printMeerkats(){
    if (_available == 3) {
        cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
    }
    if (_available == 2) {
        cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
        cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
    }
    if (_available == 1) {
        cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
        cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
        cout << meerkat3.getName() << " " << meerkat3.getAge() << endl;
    }
}


cart::~cart(){
}
