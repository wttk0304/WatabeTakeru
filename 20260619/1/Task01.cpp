#include <iostream>
#include <cstdlib>
using namespace std;

    int main() {
        
        const int SIZE = 100;
        int array[SIZE];

        for (int i = 0; i < SIZE; i++) {
            array[i] = rand() % 100 + 1; 
        }

    }