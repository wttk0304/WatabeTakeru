#include <iostream>
using namespace std;

    int main() 
    {
    //    緑：8つズラす >> 8bit
    //    赤：16づズラす >>  16bit

    //    青は0x0000FFを掛け合わす AND
    //    0x2DBE60 : 00101101 10111110 01100000  (元の色)
    //  & 0x0000FF : 00000000 00000000 11111111
    //      Blue   : 00000000 00000000 01100000 (10進数は96)
        
        int color = 0x2DBE60;
    
    //  ズラさずそんまま0x0000FFとANDをとる
        int blue = color & 0x0000FF;
    
    //  8ビット右にズラしてから0x0000FFとANDをとる
        int green = (color >> 8) & 0x0000FF;

    //  16ビット右にズラしてから0x0000FFとANDをとる
        int red = (color >> 16) & 0x0000FF;

        cout << red << endl;
        cout << green << endl;
        cout << blue << endl;

        return 0;
    }