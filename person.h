#pragma once;

#include<iostream>
#include<string>
#include"player.h"
using namespace std;
/*
class Player{
    private:
        char _recentMove;
        int _numMoves;
    public:
        Player();
        virtual void move() = 0;
        virtual string getMoves() = 0;
        char getMove(); // This is not a  virtual function using the polymorphism, this is only a member function aimed to get the private member variables
        bool win(Player* opponent);
        ~Player();
};
*/

class Person : public Player{
    protected:
        char* move;
    public:
        Person();
        void move();  // allows the user to make a move by SETTING _recentMove to 'r', 'p', 's', and increasing numMoves
                      // by one. Capital letters 'R','P','S' should also be accepted. If values other than these are inputted,
                      // then the user should be prompted to input a new value.  If a string is inputted, only the first letter
                      // of the string should be dealt with.


        string getMoves(); // returns the moves made by Person separated by spaces
        ~Person(); 
};