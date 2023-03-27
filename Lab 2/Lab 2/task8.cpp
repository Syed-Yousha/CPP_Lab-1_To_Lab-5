#include <iostream>
using namespace std;

void cyclic(int*, int, int);

int main()
{
    // INPUT
    int size;
    cout << "\nEnter the size of array: ";
    cin >> size;

    int array[size], n;

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value #" << i + 1 << ": ";
        cin >> array[i];
    }
    cout << endl;

    cout << "\nEnter the cycle steps: ";
    cin >> n;

    // Before
    cout << "\n\nBefore cycling:\n"
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << array[i];
    }

    cyclic(array, size, n);

    // After
    cout << "\n\nAfter cycling:\n"
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << array[i];
    }
}


void cyclic(int *array, int size, int n)
{
    int array2[size];
    if (n < size)
    {
        // Cyclic algorithm
        for (int i = 0; i < size; i++)
        {
            if (i < n)
            {
                array2[i] = array[i + (size - n)];
            }
            else
            {
                array2[i] = array[i - n];
            }
        }

        // Giving powers to old array
        for (int i = 0; i < size; i++)
        {
            array[i] = array2[i];
        }
    }
    else
    {
        // When n is > than size
        n -= size;

        // Cyclic algorithm
        for (int i = 0; i < size; i++)
        {
            if (i < n)
            {
                array2[i] = array[i + (size - n)];
            }
            else
            {
                array2[i] = array[i - n];
            }
        }

        // Giving powers to old array
        for (int i = 0; i < size; i++)
        {
            array[i] = array2[i];
        }
    }
}
