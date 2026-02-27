#include "Student.hpp"

int main(void){
    Student s1("Paul", 3.2);
    Student s2("ANa",3.0);

    std::cout << "Total students " << Student::getTotalStudents() << std::endl;

    s1.print();
    return 0;
}