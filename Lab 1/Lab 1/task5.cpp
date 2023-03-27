#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int roll();

int main()
{
    srand(time(NULL));
    int dice1, dice2, sum, sums[5], count[11];

    // getting rolled
    for (int i = 0; i < 10; i++)
    {
        dice1 = roll();
        dice2 = roll();
        sum = dice1 + dice2;
        sums[i] = sum;
    }

    // couting possiblities
    for (int i = 0; i < 11; i++)
    {
        count[i] = 0;
    }

    for (int i = 2; i <= 12; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == sums[j])
            {
                count[i - 2]++;
            }
        }
    }

    // Printing
    cout << "\n\n";
    for (int i = 2; i <= 12; i++)
    {
        cout << i << "\t";
    }
    cout << "--Possible outcomes";
    
    cout << "\n\n";
    for (int i = 0; i < 11; i++)
    {
        cout << count[i] << "\t";
    }
    cout << "--No. times they appeared";
}

int roll()
{
jump:
    int num = rand() % 10;

    if (num > 6 || num < 1)
    {
        goto jump;
    }
    else
    {
        return (num);
    }
}