#include<string>
#include<iostream>
#include "function-4-1.h"

using namespace std;
/*
int main(){
  RoomCounter *r = new RoomCounter(3); // set up room with capacity of 3 people
  // add some people
  for(int i=0;i<4;i++){
    cout << "num people: " << r->get_count() << endl;
    r->enter();
  }
  // exit some people 
  for(int i=0;i<4;i++){
    cout << "num people: " << r->get_count() << endl;
    r->exit();
  }
}

*/


RoomCounter :: RoomCounter(int cap) {
    capacity = cap;
    room_count = 0;
}

void RoomCounter :: enter(){
    if (room_count < capacity) room_count++;
}

void RoomCounter :: exit() {
    if (room_count >= 1) room_count--;
}

int RoomCounter :: get_count(){ return room_count;}

