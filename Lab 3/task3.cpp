#include <iostream>
using namespace std;

class Bank
{
    string name;
    int acc, depo, cash;

public:
    void sett(string name, int acc)
    {
        this->name = name;
        this->acc = acc;
    }

    void deposit()
    {
    B:
        cout << "\nDeposit the intial amount: ";
        cin >> this->depo;

        if (depo < 10000)
        {
            cout << "\ninitial amount should be greater than 10000!";
            goto B;
        }
    }

    void withdraw()
    {
    C:
        cout << "\nEnter the amount you want to windraw: ";
        cin >> this->cash;

        if (cash > 25000)
        {
            cout << "\n PKR 25000 is allowed per withdrawal!!";
            goto C;
        }
    }

    void reciept()
    {
        depo -= cash;

        cout << "\nYour new balance is => " << depo;
    }
};

int main()
{
    // INPUT
    string name;
    int acc = 0, depo;
    char choice;

    cout << "\nEnter your full name: ";
    getline(cin, name);

// Account number
jump:
    acc = 0;
    cout << "\nEnter your account number: ";
    cin >> acc;

    if (acc < 10000 || acc > 99999)
    {
        cout << "\nYour account number should be of 5 digits!";
        goto jump;
    }

// CHOICE
A:
    cout << "\nEnter (S) to access saving account and (C) to access current account: ";
    cin >> choice;

    switch (choice)
    {
    case 'S':
        cout << "\nYou choose the saving account..\n";
        break;
    case 's':
        cout << "\nYou choose the saving account..\n";
        break;
    case 'C':
        cout << "\nYou choose the Current account..\n";
        break;
    case 'c':
        cout << "\nYou choose the Current account..\n";
        break;

    default:
        cout << "\nPlease select a valid account\n!";
        goto A;
        break;
    }

    // OBJECT
    Bank obj;
    obj.sett(name, acc);

    // Deposit
    obj.deposit();

    int x = 0;
    do
    {
        // Withdraw
        obj.withdraw();

        // Reciept
        obj.reciept();

        cout<<"\nEnter '1' to exit the account: ";
        cin>>x;

    }while(x != 1);
}
