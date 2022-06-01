#pragma once
#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"


#include<algorithm>

using namespace std;

class sort_by_name{
    public:
        static void sort(animal **animals,int n);	// sorts the array of n animals into ascending order using their names
};
/*
void Sort_by_name :: Sort(Animal **animals, int n){
    string name_array[n];
    for (int i=0; i<n; i++){
        name_array[i] = (*animals[i]).get_name();
    }
    sort(name_array, name_array + n);
}
*/
