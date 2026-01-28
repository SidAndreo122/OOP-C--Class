#include <iostream>

void countdown(int n);

int main(void) {
    countdown(10);
    return 0;
}

void countdown(int n){
    if (n == 0){
        return;
    }
    std::cout << n << " ";
    // stack overflow if just n
    countdown(n-1);
}