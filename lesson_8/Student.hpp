#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
class Student {
public:     
    Student(const std::string& n, double g);
    // can also do Student(const std::string& n, double g) : name(n), gpa(g)
    static int getTotalStudents();
    static void getGraduationRequirement(double goodGPA);
    bool canGraduate();
    std::string getName() const;
    double getGPA() const;
    void print() const;
    
private:
    std::string name;
    double gpa;

    static int total_students; // like global variable for the class
    static int next_id;        // unique ids
    std::string id;
    static double goodGPA;     // graduation requirement

};

#endif
