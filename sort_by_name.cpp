#include<iostream>
#include<string>
#include"animal.h"
#include"hunter.h"
#include"vegie.h"
#include"zoo.h"
#include"sort_by_name.h"
#include<algorithm>

using namespace std;


void sort_by_name :: sort(animal **animals, int n){
    string name_array[n];
    for (int i=0; i<n; i++){
        name_array[i] = (*animals[i]).get_name();
    }
    std::sort(name_array, name_array + n);

    for (int i=0; i<n; i++){
        (*animals[i]).set_name(name_array[i]);
    }
}
