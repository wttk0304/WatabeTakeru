#include <iostream>
using namespace std;

    int main() {
    
        const int LINE = 10; 
        const int ROW = 10; 

        int array[LINE][ROW] = {
        {5, 364, 251, 751, 705, 847, 491, 121, 82, 938},
        {303, 265, 674, 868, 92, 194, 954, 244, 350, 980},
        {952, 153, 440, 475, 908, 652, 410, 719, 367, 761},
        {737, 732, 217, 842, 358, 764, 464, 570, 672, 693},
        {467, 57, 590, 256, 151, 891, 557, 536, 219, 729},
        {653, 33, 756, 98, 815, 358, 129, 403, 610, 807},
        {729, 64, 306, 677, 603, 712, 582, 375, 317, 326},
        {792, 854, 524, 76, 197, 745, 533, 61, 869, 230},
        {440, 174, 672, 845, 795, 667, 886, 677, 782, 761},
        {838, 813, 898, 383, 651, 186, 393, 305, 731, 666}
        };

        int min_val = array[0][0];
        int max_val = array[0][0];
    
        int min_r = 0, min_c = 0;
        int max_r = 0, max_c = 0;

        int TOTAL = LINE * ROW;
        
        for (int i = 0; i < TOTAL; i++) {
            int r = i / ROW;
            int c = i % ROW;

            if (array[r][c] < min_val) {
                min_val = array[r][c];
                min_r = r; 
                min_c = c;
            }
            if (array[r][c] > max_val) {
            max_val = array[r][c];
            max_r = r; 
            max_c = c;
            }
        }

        cout << "最小値: " << min_val << " 座標: (" << min_r << ", " << min_c << ")" << endl;
        cout << "最大値: " << max_val << " 座標: (" << max_r << ", " << max_c << ")" << endl;

        return 0;
    }