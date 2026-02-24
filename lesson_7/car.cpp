#include "Car.hpp"
#include <iostream>
#include <string>
Car::Car(){
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
    setFuel_Capacity(0);
    fuel_level = 0;
    mileage = 0;
}
Car::Car(const std::string& make_, const std::string &model_, int year, double mpg, double fuel_capacity){
    setMake(make_);
    setModel(model_);
    setYear(year);
    setMPG(mpg);
    setFuel_Capacity(fuel_capacity);
    fuel_level = 0;
    mileage = 0;
}

std::string Car::getMake() const{
    return make;
}
std::string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return MPG;
}
double Car::getFuelLevel(){
    return fuel_level;
}
double Car::getMileage(){
    return mileage;
}
void Car::setMake(std::string make_) {
    if (!make_.empty()) {
        make = make_;
}
}
void Car::setModel(std::string model_) {
    if (!model_.empty()) {
        model = model_;
}
}
void Car::setYear(int year_) {
    year = (year_ > 1900) ? year_ : 1900;
}
void Car::setMPG(double MPG_) {
    MPG = (MPG_ > 0) ? MPG_ : 0;
}
void Car::setFuel_Level(double fuel_level_){
    fuel_level = (fuel_level_ >= 0) ? fuel_level_ : 0;
}
void Car::setFuel_Capacity(double fuel_capacity_){
    fuel_capacity = (fuel_capacity_ > 0) ? fuel_capacity_ : 0;
}
void Car::print() const{
    std::cout << "Make:   " << make << std::endl;
    std::cout << "Model:  " << model << std::endl;
    std::cout << "Year:   " << year << std::endl;
    std::cout << "MPG:    " << MPG << std::endl;
    std::cout << "Fuel:   " << fuel_level << std::endl;
    std::cout << "Miles:  " << mileage << std::endl;

}
void Car::refuel(double gallons){
    if (!(gallons > (fuel_capacity - fuel_level))){
        fuel_level += gallons;
        std::cout << "Refueling..." << std::endl;
        std::cout << "Fuel added: " << gallons << " gallons" << std::endl;
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
    }
    else{
        double added = fuel_capacity - fuel_level;
        double excess = gallons - added;
        fuel_level = fuel_capacity;
        std::cout << "Refueling..." << std::endl;
        std::cout << "Fuel added: " << added << " gallons" << std::endl;
        std::cout << "Excess fuel: " << excess << " gallons" << std::endl;
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
    }
    
}
void Car::drive(double distance){
    if (distance > (fuel_level * MPG)){
        double traveled = fuel_level * MPG;
        mileage += traveled;
        fuel_level = 0;
        std::cout << "Distance covered: " << traveled << " miles (" << distance - traveled << " miles left)" << std::endl;
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;

    }
    else {
        fuel_level -= distance / MPG;
        mileage += distance;
        std::cout << "Distance covered: " << distance << " miles (0 miles left)" << std::endl;
        std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
    }
    
}