#include <iostream>
#include <string>
#include <vector>

template<typename T>
T min(const T& first, const T& last, const T& last2){
    if (first < last && first < last2){
        return first;
    }
    else if (last <= last2){
        return last;
    }
    else{
        return last2;
    }
}

template<typename T>
void print(const T& value){
    std::cout << value << std::endl;
}

void print(bool value){
    std::cout << "Boolean" << (value ? "True" : "False") << std::endl;
}

// find the maximum in a vector
template<typename T>
T findMax(const std::vector<T>& v){
    if(v.empty()){
        throw std::string("Error, Empty vector.");
    }
    T max = v[0];
    for (int i = 1; i < v.size(); i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    return max;
}


int main(void){
    int first = 1;
    int last = 2;
    int last2 = 87;
    double d1 = 1;
    double d2 = 2;
    double d3 = 87;
    std::string s1 = "apple";
    std::string s2 = "banana";
    std::string s3 = "tomotao";

    std::cout << min(first, last, last2) << std::endl;
    std::cout << min(d1, d2, d3) << std::endl;
    std::cout << min(s1, s2, s3) << std::endl;

    // test functions and overload function
    print(12);
    print(true);

    std::vector<double> v{1.2, 3.5, 2.4, 2.0};
    std::cout << findMax(v) << std::endl;

    return 0;
}