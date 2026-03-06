#include <iostream>

class Hello {
public:
    Hello(){
        std::cout << "no arg constructor for " << this << std::endl;
    }

    void bye() const {
        std::cout << "Bye!!!\n" ;
    }
private:

};

int main(void){
    Hello* hello = new Hello;

    // call bye for class pointer
    hello->bye();

    // deallocate memory
    delete hello;
}