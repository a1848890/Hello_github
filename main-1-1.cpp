#include<iostream>

using namespace std;

/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
int add(int lhs, int rhs) {
    return lhs + rhs;
}


int main(){
    int result = add(1, 2);
    std::cout << result << std::endl;   
    
    std::cout << "Result: " << add(1, 2) << " Expected: 3" << std::endl;

    if (add(1, 2) != 3) {
    std::cout << "Test 1 failed!" << std::endl;
    }

    return 0;
}
