#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
#include <iostream>

template <typename T>
class MyVector {
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector& other);

    void print() const;
    void push_back(const T& value);
    T pop_back();
    bool empty() const;
    int getCapacity() const;
    T& at(int index) const;
    int getSize() const;
    void push_front(const T& value);
    void insert(int pos, const T& value);
    int thirdMax() const; // return third distinct max number in array // if no third max return max
private:
    int* elements;
    int size;
    int capacity;
    void allocate_memory(int memory_size);
};

#include "MyVector.tpp"

#endif