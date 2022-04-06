#include"meerkat.h"
#include"cart.h"
#include<iostream>
#include<string>
#include<stdlib.h>
//#include"meerkat.cpp"
//#include"cart.cpp"
using namespace std;

int main(){
    meerkat meerkat1;
//    meerkat1.setName("Kitty");
  //  meerkat1.setAge(3);
    
    
    meerkat meerkat2;
   // meerkat2.setName("Mile");
   // meerkat2.setAge(2);

    meerkat meerkat3;
  //  meerkat3.setName("Charlie");
   // meerkat3.setAge(4);


    meerkat meerkat4;
   // meerkat4.setName("KitKat");
   // meerkat4.setAge(6);


    meerkat meerkat5;
   // meerkat5.setName("Youhu");
   // meerkat5.setAge(1);

    cart cart;

   // cout << house._available << endl;
    
    meerkat M[5] = {meerkat1, meerkat2, meerkat3, meerkat4, meerkat5};

    for (int i=0; i<5; i++){
        if (cart.addMeerkat(M[i]) == false) cout << "the cart is full\n";
    }
    cart.printMeerkats();
    return 0;
}
