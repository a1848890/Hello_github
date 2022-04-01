#ifndef FUNCTION_4_1_H
#define FUNCTION_4_1_H

class RoomCounter{
public:
  int room_count; // current count of people in the room
  int capacity; // maximum capacity of the room

  RoomCounter(int cap); // initialises capacity to cap and room_count to zero
  void enter();  // person tries to enter the room increments room_count by one if room_count < capacity
  void exit();   // person exits room - decrements room_count by one if room has more than zero people.
  int get_count(); // returns the current count of people in the room. 
};
#endif
