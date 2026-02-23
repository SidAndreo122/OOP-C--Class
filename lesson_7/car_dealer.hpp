#include "Car.hpp"
#include <vector>

#ifndef CARDEALER_HPP // checks if we have defined car already 
#define CARDEALER_HPP

class CarDealer {
public:
    void showInventory();
    void addCar(const Car& car);

private:
    std::vector<Car> inventory;
};

#endif