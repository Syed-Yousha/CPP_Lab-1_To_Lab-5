#include <iostream>
using namespace std;

class Bill
{
    int units, bill;
    bool c_safe;

public:
    Bill(){};
    Bill(int units)
    {
        this->units = units;
    }

    bool safe()
    {
        if (units <= 200)
        {
            this->c_safe = 1;
            return true;
        }
        else
        {
            this->c_safe = 0;
            return false;
        }
    }

    void bill_calc()
    {
        switch (c_safe)
        {
        case true:

            if (units > 150)
            {
                bill = units * 11;
            }
            else if (units > 100)
            {
                bill = units * 9;
            }
            else if (units > 50)
            {
                bill = units * 7;
            }
            else
            {
                bill = units * 5;
            }

            break;

        case false:

            if (units > 300)
            {
                bill = units * 17;
            }
            else if (units > 200)
            {
                bill = units * 15;
            }
            else if (units > 100)
            {
                bill = units * 12;
            }
            else
            {
                bill = units * 8;
            }
            break;

        default:
            cout << "\nYou entered an invalid value!!";
            break;
        }
    }

    void display()
    {
        cout << "\n\nYour Bill for this month is => " << bill << " PKR";
    }
};

int main()
{
    int units;
    bool safe;

    cout << "\n============ BILL CALCULATOR ============";
    cout << "\n ~ Enter the units of last six months ~\n";

    for (int i = 6; i > 0; i--)
    {
        if (i == 1)
        {
            cout << "\nEnter the units of current month: ";
        }
        else
        {
            cout << "\nEnter the units of month no." << i << " from now: ";
        }

        cin >> units;

        Bill obj(units);
        safe = obj.safe();

        // Safety check
        if (safe != 1)
        {
            cout << "\nYour bill is not safe!  (Extra taxes)\n";
            break;
        }

        if (i == 1 && safe != 0)
        {
            cout << "\nYour bill is safe.. (No Extra taxes)\n";

            // Current month bill
            obj.bill_calc();
            obj.display();
            exit(0);
        }
    }

    // Current month bill
    cout << "\nEnter the units of current: ";
    cin >> units;

    Bill obj(units);
    obj.bill_calc();
    obj.display();

    return 0;
}