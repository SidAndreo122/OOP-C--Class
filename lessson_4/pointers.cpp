#include <iostream>

// pass by reference
void add_five(int& num);

int main(void) {
    int a = 10;
    // reference variable
    int& a_ref = a;

    // copies the variable
    a += 10;
    std::cout << a << ' ' << a_ref << std::endl;
    a_ref *= 10;
    std::cout << a << ' ' << a_ref << std::endl;
    
    add_five(a);
    std::cout << a << ' ' << a_ref << std::endl;
    return 0;
}

void add_five(int& num){
    num += 5;
}