/*
#include<iostream>
using namespace std;
void passorfail(char grade);

int main(){
    passorfail('A');
    
    passorfail('B');
    passorfail('C');
    passorfail('D');
    passorfail('E');
    passorfail('s');
    return 0;
}

*/

void passorfail(char grade){
    cout <<"\n";
    switch(grade){
        case 'A':
            cout<<"Pass"<<endl;
            break;
        case 'B':
            cout<<"Pass"<<endl;
            break;
        case 'C':
            cout<<"Pass"<<endl;
            break;
        case 'D':
            cout<<"fail"<<endl;
            break;
        case 'E':
            cout<<"fail"<<endl;
            break;
        default:
            cout<<"Nothing"<<endl;
            break;
    }
}
