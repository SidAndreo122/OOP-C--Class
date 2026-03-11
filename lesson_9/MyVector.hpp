#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
#include <iostream>

class MyVector {
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector& other);

    void print() const;
    void push_back(int value);
    int pop_back();
    bool empty() const;
    int getCapacity() const;
    int& at(int index) const;
    int thirdMax() const; // return third distinct max number in array // if no third max return max
private:
    int* elements;
    int size;
    int capacity;
    void allocate_memory(int memory_size);
};
#endif