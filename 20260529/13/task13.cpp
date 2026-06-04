#include <iostream>
using namespace std;

    int main() 
    {
        // 2進数 00101101 10111110 01100000
        //       [  赤  ] [  緑  ] [  青  ]

        // ANDで青だけをくり抜く

        //右に8つか16つずらす

        int color = 0x2DBE60;
    
        int blue = color & 0x0000FF;
    
    
    }