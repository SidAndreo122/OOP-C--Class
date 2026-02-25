#include <iostream>
#include <string>

class Student {
public:     
    std::string name;
    double gpa;

    static int total_students; // like global variable for the class

    Student(const std::string& n, double g){
        name = n;
        gpa = g;
        total_students++;
    }
    // can also do Student(const std::string& n, double g) : name(n), gpa(g)

};

// initialize static data member
int Student::total_students = 0;

int main(void){
    Student s1("Paul", 3.2);
    Student s2("ANa",3.0);

    std::cout << "Total students " << Student::total_students << std::endl;
    return 0;
}