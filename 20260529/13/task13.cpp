#include <iostream>
using namespace std;

int main()
{

    int color = 0x2DBE60;

    int blue = color & 0x0000FF;

    int green = (color >> 8) & 0x0000FF;

    int red = (color >> 16) & 0x0000FF;

    cout << red << endl;
    cout << green << endl;
    cout << blue << endl;

    return 0;
}