#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
public:
    //constructor
    Car();
    Car(const std::string& make_, const std::string &model_, int year, double mpg, double fuel_capacity);
    
    //print method
    void print() const;
    void refuel(double gallons);
    void drive(double distance);

    void setMake(std::string make);
    void setModel(std::string model);
    void setYear(int year);
    void setMPG(double MPG);
    void setFuel_Level(double fuel_level);
    void setFuel_Capacity(double fuel_capacity);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    double getFuelLevel();
    double getMileage();

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    double mileage;
    double fuel_capacity;
    double fuel_level;
};

#endif