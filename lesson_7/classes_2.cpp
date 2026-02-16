#include <iostream>
#include <string>
#include "Car.hpp"



int main(void){
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.setMPG(13.5);

    ferrari.print_info();

    return;
}