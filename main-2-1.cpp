#include<math.h>
#include<stddef.h>
#include<iostream>
#include<string>
using namespace std;
void print_as_binary(std::string decimal_number);

int main(){
    string a = "512";
    string b = "126";
    print_as_binary(a);
    print_as_binary(b);

    return 0;
}





/*#include<stddef.h>
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string a = "255";
    int str_len = a.length();
    cout << "string length: "<<str_len<<endl;

    int value = 0;
    int adder = 0;
    for(int i=0; i<str_len; i++){
        adder = ((int)a[i] - 48) * pow(10,str_len-i-1);
        cout << "adder: "<<adder <<endl;
        value += adder;
    }
    cout << "value:" << value<<endl;

    return 0;
}
*/