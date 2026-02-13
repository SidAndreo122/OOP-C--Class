#include <iostream>
#include <string>
#include <cstdlib>

// Structure
typedef struct {
    std::string title;
    int duration;
} Lecture;

// route struture
class Route {
// access specifiers (public, private) public by default
private:    
    std::string source;
    std::string destination;
    int length;
    
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900; 
    }

public:
    // constructor
    // always public, no return type, same name as the class
    Route() {
        length = 0;
        source = "-";
        destination = "-";
    }

    // different syntax
    // Route() : source("-"), destination("-"), length(0) {
    // }

    // constructor with parameters
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }



    // structs can have methods?
    void print() {
        std::cout << source << " -> " << destination << " : " << length << std::endl;
    }
    // Getters and setters
    std::string getSource() { // get
        return source;
    }
    
    std::string getDestination() {
        return destination;
    }

    int getLength() {
        return length;
    }

    void setSource(const std::string& new_source) { // set
        source = new_source;
        updateLength();
    }

    void setDestination(const std::string& new_destination) { // set
        destination = new_destination;
        updateLength();
    }
};

int main(void){
    srand(time(0));
    Route da_Route;
    da_Route.print();
    da_Route.setSource("Lakeland");
    da_Route.setDestination("Orlando");
    da_Route.print();

    da_Route.setDestination("New York");
    da_Route.print();

    // second object
    Route da_Route_2("Lakeland", "Tokyo");
    da_Route_2.print();


    // lecture object
    Lecture oop_lecture;
    // set properties of objects
    oop_lecture.duration = 10000;
    oop_lecture.title = "Classes and Objects";

    std::cout << "Title: " << oop_lecture.title << " Duration: " << oop_lecture.duration << std::endl;
    return 0;
}