#include <iostream>
#include <cmath>

using namespace std;

int searchBinary(int array[], int left, int right, int key)
{
    int midd = 0;
    while (1)
    {
        midd = (left + right) / 2;

        if (key < array[midd])
            right = midd - 1;
        else if (key > array[midd])
            left = midd + 1;
        else
            return midd;

        if (left > right)
            return -1;
    }
}

int main()
{
    const int size = 12;
    int array[size] = {};
    int key = 0;
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        array[i] = i + 1;
        cout << array[i] << " ";
    }

    cout << "\n\nEnter number: ";
    cin >> key;

    index = searchBinary(array, 0, size, key);

    if (index >= 0)
        cout << "The specified number is at index: " << index << "\n\n";
    else
        cout << "There is no such number in the array!\n\n";

    return 0;
}
