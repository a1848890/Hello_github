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
    int ID_array[n];
    for (int i=0; i<n; i++){
        ID_array[i] = (*animals[i]).get_animalID();
    }
    std::sort(ID_array, ID_array + n);
}
