#include <iostream>
#include <random>
#include "Define.cpp"

int main() {

    int array[Define::SIZE];
    std::random_device rd;
    std::uniform_int_distribution<int> distrib (Define::MIN, Define::MAX); //uniform...は最小と最大指定

    for (int i = 0; i < Define::SIZE; ++i) {
        array[i] = distrib(rd); // 
    }

    std::cout << "ソート前: ";
    for (int i = 0; i < Define::SIZE; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < Define::SIZE - 1; ++i) {
        for (int j = 0; j < Define::SIZE - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]); //swapとは
            }
        }
    }

    std::cout << "ソート後: " << std::endl;
    for (int i = 0; i < Define::SIZE; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}
