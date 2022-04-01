#include<iostream>
using namespace std;

int lookup_speeding_fine(int over);

/*
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

*/





int lookup_speeding_fine(int over){
    int fine_amount = 0;
    if (over <= 0) fine_amount = 0;
    else if (over>0 && over<10) fine_amount = 180;
    else if (over>=10 && over<20) fine_amount = 406;
    else if (over>=20 && over<30) fine_amount = 825;
    else if (over>=30 && over<45) fine_amount = 1500;
    else if (over >= 45) fine_amount = 1690;
    return fine_amount;
}
