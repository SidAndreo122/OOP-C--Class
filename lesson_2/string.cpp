#include <iostream>
#include <string>

int main(void) {
    std::string str = "Hello";

    std::cout << str << std::endl;
    std::cout << str << "has size" << str.length()<< std::endl;

    str += " World!";

    std::cout << str << " has size " << str.length()<< std::endl;
    
    
    return 0;

}