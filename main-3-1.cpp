
#include<iostream>
using namespace std;

int count_numbers_in_range(int vals[], int length, int bottom, int top);

int main(){
    
    int vals[]={1,7,3,4,6,5,2};

    int res=count_numbers_in_range(vals,7,3,6);
    int res1 = count_numbers_in_range(vals,7,2,4);

    cout << "res = " << res << endl;
    cout << "res1 = " << res1 << endl;

    return 0;
}



