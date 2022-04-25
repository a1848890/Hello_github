#include<iostream>
#include<string>
#include"Musician.h"

using namespace std;

int main(){
    
    Musician person1 = Musician("jazz_drum", 20);
    cout << "Experience: " << person1.get_experience() << endl;
    cout << "Instrument: " << person1.get_instrument() << endl;


    return 0;
}
