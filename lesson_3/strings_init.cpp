#include <iostream>
#include <string>
#include <random>

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

    // random numbers

    // generate seed
    std::random_device rd;

    // create a random number engine
    std::mt19937 engine(rd());

    // define the range
    std::uniform_int_distribution<int> dist(1, 100);

    for (int i =0; i < 20; i++){
        int x = dist(engine);
        std::cout << x << std::endl;
    }
}
