#pragma once;

#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        char _recentMove;
        int _numMoves;
    public:
        Player();
        virtual void move() = 0; // A pure virtual function that allows the child to set their _recentMove.
        virtual string getMoves() = 0; // A pure virtual function that returns a space-separated string of the moves the child classes has made.
        char getMove(); // This is not a  virtual function using the polymorphism, this is only a member function aimed to get the private member variables
                        // This will return us the most recent move, namely _recentMove.

        bool win(Player* opponent); // Compares the moves between child classes and checks if someone wins.
        ~Player(); // destructor
};

