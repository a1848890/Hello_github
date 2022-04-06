
#include<iostream>
#include"meerkat.h"
using namespace std;
meerkat::meerkat()
{
    _meerName = "";
    _meerAge = 0;
}

void meerkat::setName(string meerName){
    _meerName = meerName;
}

string meerkat::getName(){
    return _meerName;
}

void meerkat::setAge(int meerAge){
    _meerAge = meerAge;
}

int meerkat::getAge(){
    return _meerAge;
}

