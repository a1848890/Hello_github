#include"player.h"
#include"person.h"
#include<string>
using namespace std;

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

class Person : public Player{
    protected:
        char* _move;
    public:
        Person();
        void move();
        string getMoves();
        ~Person();
};

Person :: Person(){}

void Person::move(){
    
}