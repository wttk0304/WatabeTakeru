#include <iostream>
using namespace std;

int main()
{
    for (int a = 1; a <= 10; ++a)
    {
        if (a % 3 != 0)
        {
            cout << a << endl;
        }
    }

    return 0;
}