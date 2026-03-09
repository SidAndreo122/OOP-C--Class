#include "MyVector.hpp"

MyVector::MyVector(int capacity){
    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector(){
    delete [] elements;
}

MyVector::MyVector(const MyVector& other){
    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];

    for (int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }
}

void MyVector::print() const{
    std::cout << "{ ";
    for (int i=0; i < size; i++){
        std::cout << elements[i] << ' ';
    }
    std::cout << "} " << std::endl;
}

void MyVector::push_back(int value){
    elements[size] = value;
    size++;
}