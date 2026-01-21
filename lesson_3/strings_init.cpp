#include <iostream>
#include <string>

int main(void) {
    // initialize string
    std::string str1("first string");

    // copy str1
    std::string str2(str1);

    // prints 100 &
    std::string str3(100, '&');
    
    // initalize the string by a part of another string
    std::string str4(str1, 6, 5); // start from index, take 5 chars

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str1 << std::endl;

    if (str1 == str2){
        std::cout << str4 + str1 << std::endl;
    }
}
