#include<iostream>
#include"meerkat.h"

using namespace std;

inline meerkat::meerkat()
{
}

inline void meerkat::setName(string meerName){
    _meerName = meerName;
}

inline string meerkat::getName(){
    return _meerName;
}

inline void meerkat::setAge(int meerAge){
    _meerAge = meerAge;
}

inline int meerkat::getAge(){
    return _meerAge;
}

