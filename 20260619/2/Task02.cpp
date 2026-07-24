#include <iostream>
#include <cstdlib>
using namespace std;

    int main() {
        
        const int SIZE = 100;
        int array[SIZE];

        for (int i = 0; i < SIZE; i++) {
            array[i] = rand() % 100 + 1; 
        }

        for (int i = 0; i < SIZE - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < SIZE; j++) {
                if (array[j] < array[min_index]) {
                    min_index = j;
                }
            }
                int temp = array[i];
                array[i] = array[min_index];
                array[min_index] = temp;
        }

        for (int i = 0; i < SIZE; i++) {
            cout << array[i] << " ";
        }
        cout << endl; 
        
        return 0;
    }