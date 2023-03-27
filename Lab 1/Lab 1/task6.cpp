#include <iostream>
using namespace std;

int out_of_order(double *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i] < array[i - 1])
        {
            return (i);
        }
        else
        {
            continue;
        }
    }

    return (-1);
}

int main()
{
    int size, index;

    cout << "\nEnter the size of array: ";
    cin >> size;

    double s[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the #" << i + 1 << " element: ";
        cin >> s[i];
    }

    index = out_of_order(s, size);

    if (index == -1)
    {
        cout << "\n\nThe array is sorted";
    }
    else
    {
        cout << "\n\nArray is become out of order at index #" << index;
    }
}