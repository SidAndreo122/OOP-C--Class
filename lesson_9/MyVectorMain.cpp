#include "MyVector.hpp"
#include <vector>

int main(void){
    MyVector* mv = new MyVector(10);

    for (int i = 0; i < 20; i++){
        mv->push_back(i * i);
    }

    mv->at(0) = 1;

    while (!mv->empty()){
        std::cout << "Capacity: " << mv->getCapacity() << std::endl;
        std::cout << mv->pop_back() << std::endl;
        mv->print();
    }
    mv->print();

    delete mv;
    std::vector<int> v;
    v.push_back(2);
    v.at(0) = 1;
    std::cout << v.at(0);


    return 0;
}