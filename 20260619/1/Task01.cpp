#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    const int SIZE = 100;
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 9000 + 1000;
    }

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
        cout << endl;
    }

    return 0;
}