#include <iostream>
#include <string>

class Hello {
public:
    Hello() : size(0), messages(nullptr) { // shortcut to initiaze members
        std::cout << "no arg constructor for " << this << std::endl;
    }

    Hello(int n) : size(n) {
        std::cout << "Constructor with arguments for " << this << std::endl;
        messages = new std::string[n];
        for (int i = 0; i < size; i++){
            messages[i] = (i % 2) ? "You are welcome" : "Go away!";
        }
    }

    // Destructor
    ~Hello() {
        std::cout << "Destructor for " << this << std::endl;
        if (messages != nullptr){
            delete [] messages;
        }
    }

    void bye() const {
        std::cout << "Bye!!!\n" ;
    }
private:
    std::string* messages;
    int size;

};

int main(void){
    Hello* hello = new Hello;

    // call bye for class pointer
    hello->bye();

    

    Hello* hello2 = new Hello(10);
    // for (int i= 0; i < 1000; i++){
    //     Hello(99999);
    // }

    Hello hello3(10);
    

    // deallocate memory
    delete hello;
    delete hello2;
}