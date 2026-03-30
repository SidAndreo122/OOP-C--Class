#include <iostream>
#include "Point.hpp"

int main(void) {
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(50, 70);

    // operator overloading
    if (p1.operator==(p2)) {
        std::cout << "Equal\n";
    }
    else{
        std::cout << "not equal\n";
    }

    if (p1 != p2) {
        std::cout << (char)p3[0];
    }
    else{
        std::cout << (char)p3[1];
    }

    p1[0] = 52;
    std::cout << (char)p1[0];

    std::cout << "YTB";
}