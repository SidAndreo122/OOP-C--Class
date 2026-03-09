#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
#include <iostream>
#include <vector>

class MyVector {
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector&);

    void print() const;
    void push_back(int value);
private:
    int* elements;
    int size;
    int capacity;
};
#endif