#include <string>
#include <iostream>

#ifndef CAR_HPP // checks if we have defined car already *Inclusion Guard*
#define CAR_HPP
class Car {
public:
// No-arg constructor
Car();
// TODO constructor with arguments
Car(const std::string& make_, const std::string& model_, int year, double mpg);
// Get methods
std::string getMake();
std::string getModel();
int getYear();
double getMPG();
// Set methods
void setMake(const std::string& make_);
void setModel(const std::string& model_);
void setYear(int year_);
void setMPG(double MPG_);
// Class methods
void print_info();
private:
std::string make;
std::string model;
int year;
double MPG;
};

#endif