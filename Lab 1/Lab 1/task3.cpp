#include <iostream>
using namespace std;

int main()
{

    int array[20];
    int num = 0;

    for (int i = 0; i < 20; i++)
    {
    jump:
        cout << "\n\nEnter an integer: ";
        cin >> num;

        // Rechecking
        if (i > 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (num == array[j])
                {
                    goto jump;
                }
            }
        }

        // Validate
        if (num > 10 && num < 100)
        {
            array[i] = num;
        }
        else
        {
            cout << "\n\nYou entered an invalid value, it should be greater than 10 and less than 100!";
            goto jump;
        }
    }

    // Printing
    cout << "\n\nUnique values are => ";

    for (int i = 0; i < 20; i++)
    {
        cout << " " << array[i];
    }

    return 0;
}