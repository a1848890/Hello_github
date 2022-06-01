#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"
#include"sort_by_name.h"
#include<algorithm>

using namespace std;

void sort(animal **animals,int n){
    for (int j=n; j>0; j--){
        for (int i=0; i<n-1; i++){
            if (animals[i]->get_name() > animals[i+1] -> get_name()){
                animal* temp = animals[i];
                animals[i] = animals[i+1];
                animals[i+1] = temp;
                 //std :: swap(animals[i],  animals[i+1]);
            }
        }
    }
}
