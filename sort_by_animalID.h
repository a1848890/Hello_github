#pragma once
#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"

#include<algorithm>

using namespace std;

class sort_by_animalID{
    public:
    static void sort(animal **animals,int n);// sorts the array of n animals into ascending order using their animalIDs
};

/*
void Sort_by_animalID :: Sort(Animal **animals,int n){
    int ID_array[n];
    for (int i=0; i<n; i++){
        ID_array[i] = (*animals[i]).get_animalID();
    }
    sort(ID_array, ID_array + n);
}
*/
