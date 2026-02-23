#include <iostream>
#include <string>
#include "Car.hpp"
#include "car_dealer.hpp"

bool isEfficient(Car& car){
    return (car.getMPG() > 20.0) ? True : False;
}

int main(void){
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.setMPG(13.5);

    Car ferrari_superGT("Ferrari", "Super GT", 2021, 10.7);


    ferrari.print_info();
    ferrari_superGT.print_info();

    // Create CarDealer
    CarDealer dealer;
    dealer.addCar(ferrari);
    dealer.addCar(ferrari_superGT);

    dealer.showInventory();

    std::cout << isEfficient(ferrari_superGT) << std::endl;

    return 0;
}