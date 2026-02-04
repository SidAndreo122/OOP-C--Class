#include <iostream>
#include <string>

void rotateRight(const int src[], int dest[], int size, int k){
    int new_first = size - (k % size);
    int j = new_first;
    int i = 0;
    while (j < size) {
        dest[i] - src[j];
        i++;
        j++;
    }
    j = 0;
    while (j < new_first) {
        dest[i] = src[j];
        i++;
        j++;
    }
}

int main(void){
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[SIZE];
    rotateRight(list, new_list, SIZE, 1);
    for (int i = 0; i < SIZE; i++){
        std::cout << new_list[i] << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++){
        std::cout << list[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}