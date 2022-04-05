#pragma once
#include<string>

using namespace std;

class meerkat{
private:
    string _meerName;
    int _meerAge;
    
public:
    meerkat();         // no name or age is required to create a meerkat
    void setName(string meerName);   // change the meerkat's name
    string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();
};

// * * * * * * * * * * * * * * * // 

/*

int main(){
    meerkat m1;
    m1.setName("Kitty");
    string m1_name = m1.getName();
    m1.setAge(10);
    int m1_age = m1.getAge();

    cout << "m1's age: " << m1_age << endl;
    cout << "m1's name: " << m1_age << endl;

    return 0;
}

*/
