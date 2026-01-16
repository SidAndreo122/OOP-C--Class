#include <iostream>

// Create the namespace
namespace first {
    int a;
}
// shift-alt-down to copy
// shift-alt to move selected code anywhere
namespace second {
    int a;
}

// using namespace std;

int main(void) {
    
    first::a = 5;
    second::a = 10;

    std::cout << first::a << std::endl;
    std::cout << second::a << std::endl;

    // std - standard namespace
    // cout - console output (object of iostream class)
    // endl - endline - move cursor to next line
    std::cout << "Hello from COP3337" << std::endl;

    std::cout << "(15 * 78) + 14 is" << (15 * 78) + 14 << std::endl;
    return 0;
}

// g++ hello.cpp
// ./a.out to run