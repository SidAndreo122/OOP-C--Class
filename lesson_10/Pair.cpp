#include <iostream>
#include <string>

//Template class
// templates can have defaults
template <typename T1 = int, typename T2 = char>
class Pair{
public:
    Pair(const T1& f, const T2& s) : first(f), second(s){

    }

    // Getters
    const T1& getFirst() {
        return first;
    }

    const T2& getSecond() {
        return second;
    }

    // Setters
    void setFirst(const T1& first) {
        this->first = first;
    }

    void setSecond(const T2& second) {
        this->second = second;
    }
private:
    T1 first;
    T2 second;
};


// create function that takes 2 arguments of any type returns a pair of these arguments
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& f, const T2& s){
    return Pair<T1, T2>(f, s);
}
// functions remove things after calling them, CLASSES DO NOT

int main (void) {
    // create pair object
    Pair<int, double> p(1, 4.5);

    std::cout << "(" << p.getFirst() << ", " << p.getSecond() << ")\n";

    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")\n";

    auto p3 = createPair(std::string("hello"), std::string("car"));
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")\n";

    Pair p4(5, '!');
    std::cout << "(" << p4.getFirst() << ", " << p4.getSecond() << ")\n";
    return 0;
}