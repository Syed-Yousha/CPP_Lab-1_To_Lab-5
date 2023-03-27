#include <iostream>
using namespace std;

class number
{
    float num;
    int result;

public:
    void setnum(float num)
    {
        this->num = num;
    }

    void whole_num()
    {
        int temp;
        float remain;

        temp = num;
        remain = num - temp;

        if (remain * 1000 == 0)
        {
            cout << "\nNumber is whole, all good";
        }
        else
        {
            cout << "\nError!, Number is not whole!, (Program can only take factorial of whole numbers!)";
            exit(1);
        }
    }

    void check_sign()
    {
        if (num > 0)
        {
            cout << "\nNumber is Positive, all good";
        }
        else
        {
            cout << "\nError!, Number is Negative!, (Program can only take factorial of Positive numbers!)";
            exit(1);
        }
    }

    long factorial(long fact)
    {
        if (fact == 0)
        {
            return 1;
        }
        else
        {
            fact = fact * (factorial(fact - 1));
        }
        return fact;
    }
};

int main()
{
    float num;

    cout << "\nEnter any number to find it's factorial: ";
    cin >> num;

    number obj;
    obj.setnum(num);

    // Validation
    obj.whole_num();
    obj.check_sign();

    // factorial
    long fact;
    fact = obj.factorial(num);
    cout << "\nThe factorial is: " << fact;
}