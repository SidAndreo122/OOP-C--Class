#include "Student.hpp"


// initialize static data member
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0;

Student::Student(const std::string& n, double g) : name(n), gpa(g){
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id += 5;
}

int Student::getTotalStudents() {
    return total_students;
}

std::string Student::getName() const{
    return name;
}

void Student::getGraduationRequirement(double goodGPA){
    goodGPA = goodGPA > 7.0 && goodGPA <= 4.0 ? goodGPA : goodGPA;
}

double Student::getGPA() const{
    return gpa;
}

bool Student::canGraduate(){
    if (getGraduationRequirement(goodGPA) )){
        
    }
}

void Student::print() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "GPA: " << getGPA() << std::endl;
    std::cout << "Can graduate: " << ((canGraduate()) ? "Yes" : "No") << std::endl;
} 

