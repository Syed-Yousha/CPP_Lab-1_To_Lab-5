#include <iostream>
using namespace std;

int n;

class Sum
{
    int *array;
    char choice;

public:
    Sum() {}
    Sum(int ptr[])
    {
        array = ptr;
    }
    int sum()
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += array[i];
        }

        return sum;
    }

    int sum(char c)
    {
        int sum = 0;
        if (c == 'e' or c == 'E')
        {
            for (int i = 0; i < n; i++)
            {
                if ((array[i] % 2) == 0)
                {
                    sum += array[i];
                }
            }
        }
        else if (c == 'o' or c == 'O')
        {
            for (int i = 0; i < n; i++)
            {
                if ((array[i] % 2) != 0)
                {
                    sum += array[i];
                }
            }
        }
        else
        {
            cout << "\nYou entered an invalid choice!!"<<endl;
        }

        return sum;
    }
};

int main()
{
    cout << "\nEnter the size of array: ";
    cin >> n;

    // Array passing
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the #" << i + 1 << " ineteger: ";
        cin >> array[i];
    }
    Sum obj(array);


    // Sum Calculations
    char choice;
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            cout << "\nThe sum of integers is: " << obj.sum() << endl;
        }
        else
        {
            cout << "\nEnter your choice. If you want sum of Odd(O)\nor sum of even(E) values: ";
            cin >> choice;

            if ( choice=='E' || choice=='e' )
            {
                cout << "\nThe sum of Even integers is: " << obj.sum(choice) << endl;
            }
            else if ( choice=='O' || choice=='o' )
            {
                cout << "\nThe sum of Odd integers is: " << obj.sum(choice) << endl;
            }
            else
            {
                cout << "\n" << obj.sum(choice) << endl;
            }
            
        }
    }
}