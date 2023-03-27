#include <iostream>
using namespace std;

bool prime_check(int);

int main()
{
    int num, flag;

jump:
    cout << "\nEnter any number, to find if it is prime number or not: ";
    cin >> num;

    //Printing
    if (num > 1 && num < 1000)
    {
        flag = prime_check(num);

        if (flag == 1)
        {
            cout << "\nValue is a prime number!";
        }
        else
        {
            cout << "\nValue is not a prime number!";
        }
    }
    else
    {
        cout << "\n\nPlease enter a value less than '1000' and greater than '1'!!";
    }

    // Loop
    int quit = 0;
    cout << "\n\nEnter '1' if want to exit the program or any key to continue: ";
    cin >> quit;

    if (quit != 1)
    {
        goto jump;
    }
    else
    {
        return 0;
    }
    
}

bool prime_check(int num)
{
    int flag = 0, i = num / 2;

    while (i != 1)
    {
        if (num % i == 0)
        {
            break;
        }
        else if ((i == 2) && (num % i != 0))
        {
            flag = 1;
            break;
        }
        i--;
    }

    return flag;
}