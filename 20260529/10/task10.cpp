#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i >= 50 && i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }
    
    return 0;
}