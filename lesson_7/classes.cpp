#include <iostream>
#include <string>

// Structure
typedef struct {
    std::string title;
    int duration;
} Lecture;

// route struture
typedef struct {
// access specifiers (public, private) public by default
private:    
    std::string source;
    std::string destination;
    int length;
    // Getters and setters
    
public:
    // structs can have methods?
    void print() {
        std::cout << source << " -> " << destination << " : " << length << std::endl;
    }
} Route;
int main(void){

    Route da_Route;
    da_Route.source = "Lakeland";
    da_Route.destination = "Palm Coast";
    da_Route.length = 50;
    da_Route.print();


    // lecture object
    Lecture oop_lecture;
    // set properties of objects
    oop_lecture.duration = 10000;
    oop_lecture.title = "Classes and Objects";

    std::cout << "Title: " << oop_lecture.title << " Duration: " << oop_lecture.duration << std::endl;
    return 0;
}