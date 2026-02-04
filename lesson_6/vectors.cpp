#include <iostream>
#include <vector> // must use to use vector

void print(const std::vector<int>& v){ // pass by value is default use reference though
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
}

int main(void){
    // vectors are dynamic 1D arrays
    std::vector<int> v; // empty vector

    std::vector<int> v2 {1, 2, 3, 4, 5 , 6};
    print(v2);

    // provide size and value for each
    std::vector<int> v3(5, 10);
    print(v3);

    // copy a vector
    std::vector<int> v4(v3);
    print(v4);

    // first and last element
    std::cout << v2.front() << std::endl;
    std::cout << v2.back() << std::endl;

    // add to end (append) or remove last
    v2.push_back(100);
    v2.push_back(200);
    v2.pop_back();
    print(v2);

    // begin - points to the first element in the vector
    // end - points to the one past the last elemet
    std::cout << *v2.begin() << std::endl;
    std::cout << *v2.begin() + 2 << std::endl;
    std::cout << *v2.end()<< std::endl;

    // insert (location (iterator #pointer), value)
    v2.insert(v2.begin() + 1, 900);
    print(v2);
    v2.insert(v2.end() - 4, 500);
    print(v2);



    return 0;
}