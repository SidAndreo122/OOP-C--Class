#include "Car.hpp"

#include <string>
#include <iostream>

class Car {
public:
    Car();

    //get
    std::string Car::getMake() { return make; }
    std::string Car::getModel() { return model; }
    int Car::getYear() { return year; }
    double Car::getMPG() { return MPG; }

    //set
    void setMake(const std::string& make_) { if(!make_.empty()) {make = make_;}}
    void setModel(const std::string& model_){ if(!model_.empty()) {model = model_;}}
    void setYear(int year_){ year = (year_ > 1000) ? year_ : 1900;}
    void setMPG(double MPG_){ MPG = (MPG_ > 0) ? MPG_ : 0;}

    void print_info(){
        std::cout << make << std::endl;
        std::cout << model << std::endl;
        std::cout << year << std::endl;
        std::cout << MPG << std::endl;
    }

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
};

Car::Car() {
    setMake("...");
    setModel("...");
    setYear(1000);
    setMPG(0);
}