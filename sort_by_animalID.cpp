#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"
#include"sort_by_animalID.h"
#include<algorithm>

using namespace std;

/*
void Sort_by_animalID :: Sort(Animal **animals,int n){
    for (int i=0; i<n; i++){
    }
}
*/



void sort_by_animalID :: sort(animal **animals,int n){
    for (int j=n; j>0; j--){
        for (int i=0; i<n-1; i++){
            if (animals[i]->get_animalID() > animals[i+1] -> get_animalID()){
                animal* temp = animals[i];
                animals[i] = animals[i+1];
                animals[i+1] = temp;
            }
        }
    }
}
