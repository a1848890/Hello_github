#include<iostream>
using namespace std;

int size_of_variable_star_arr();

int main(){
    int sz = size_of_variable_star_arr();
    cout << "size_of array is  = "<< sz <<endl;
    return 0;

}




int size_of_variable_star_arr(){
    int *p = new int[3];
    cout << "size_of *p is: "<<sizeof(*p)<<endl;
    delete [] p;
    cout << "Pointer p deleted by using 'delete [] p'.\n";
    return sizeof(int[3]);
}
