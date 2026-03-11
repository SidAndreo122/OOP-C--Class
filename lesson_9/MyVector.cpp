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
    if (size == capacity){
        allocate_memory(capacity*2);
    }
    elements[size] = value;
    size++;
}

void MyVector::allocate_memory(int memory_size){
    int* to_delete = elements;
        capacity *=2;
        elements = new int(capacity);
        for (int i; i< size; i++){
            elements[i] = to_delete[i];
        }
    delete [] to_delete;
}

int MyVector::pop_back(){
    if (!empty()){
        if (size < capacity / 2){
            allocate_memory(capacity / 2);
        }
        return elements[--size];
    }
    else{
        return -999999999;
    }
}

bool MyVector::empty() const {
    if (size == 0){
        return true;
    } 
    return false;
}

int MyVector::getCapacity() const {
    return capacity;
}

int& MyVector::at(int index) const {
    if (index > -1 && index < size){
        return elements[index];
    }
    else {
        throw "Out of bounds";
    }
}