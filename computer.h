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

class Computer : public Player{
    public:
        Computer();
        Computer(string letter); //a constructor that set what the computer will make on its turn('r', 's' or 'p'). The
                                 // arguement 'R', 'S', 'P' should also be accepted. Any other arguements should be ingored
                                 // and the default value 'r' should be used instead.

        void move(); // increase the _numMoves by one.
        string getMoves(); // return the moves made by Computer (separated by space)
        ~Computer(); 
};
