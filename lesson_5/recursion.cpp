#include <iostream>

void countdown(int n);

void print_digits(int num){
    // base case
    if (num <= 0) {
        return;
    }
    print_digits(num / 10);
    std::cout << num % 10 << std::endl;
}

int power(int base, int exp){
    if (exp == 0){
        std::cout << "I am power(" << base << "," << exp << ")\n";
        std::cout << "The answer is" << 1 << std::endl;
        return 1;
    }
    std::cout << "I am power(" << base << "," << exp << ")\n";
    std::cout << "I know it's " << base << "*" << "power()" << base << "," << exp -1 << ")\n";
    int help = power(base, exp - 1);
    std::cout << "power(" << base << "," << exp << ") returned me" << help << std::endl;
    return base * help;
}

int main(void) {
    countdown(10);
    std::cout << " " << std::endl;
    print_digits(12345);
    std::cout << " " << std::endl;
    power(2, 4);
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