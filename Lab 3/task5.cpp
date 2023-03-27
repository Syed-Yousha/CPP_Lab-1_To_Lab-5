#include <iostream>
using namespace std;

class PhoneNumber
{
    int std;
    string number;

public:
    void sett(string number)
    {
        this->number = number;
    }

    void number_convert()
    {

        // Incrementing STD
        this->std = (int)number[0];
        std++;

        char a = char(std);
        number[0] = a;

        // Swapping starting numbers;
        char temp;

        temp = number[1];
        number[1] = number[2];
        number[2] = temp;
    }

    void display()
    {
        cout << "\nYour new phone number is => " << number << endl;
    }
};

int main()
{
    string number;

    for (int i = 0; i < 6; i++)
    {
        cout << "\nNow enter your phone number e.g.(823-38-985334): ";
        cin >> number;

        PhoneNumber obj;
        obj.sett(number);
        obj.number_convert();
        obj.display();
    }
}