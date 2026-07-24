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

    // 挿入ソート処理（…どこかがちょっと違う！）
    for (int i = 1; i < SIZE; i++)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] < temp)
        { // ← ここ！
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}