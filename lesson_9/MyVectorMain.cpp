#include "MyVector.hpp"

int main(void){
    MyVector* mv = new MyVector(10);

    for (int i = 0; i < 5; i++){
        mv->push_back(i * i);
    }

    mv->print();

    delete mv;


    return 0;
}