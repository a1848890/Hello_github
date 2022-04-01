
#include<iostream>
using namespace std;

int lookup_speeding_fine(int over);


int main(){
    
    int over=0;
    cout << "my speeding fine is: " << lookup_speeding_fine(over) << endl;
    over=10;
    cout << "my speeding fine is: " << lookup_speeding_fine(over) << endl;
    over=21;
    cout << "my speeding fine is: " << lookup_speeding_fine(over) << endl;
    over=50;
    cout << "my speeding fine is: " << lookup_speeding_fine(over) << endl;

    return 0;
}

