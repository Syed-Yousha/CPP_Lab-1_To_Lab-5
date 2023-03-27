#include <iostream>
using namespace std;

class TollCars
{
    double money;
    unsigned int no_vehicles;

public:
    TollCars()
    {
        this->money = 0;
        this->no_vehicles = 0;
    }
    TollCars(double cash, unsigned int passed)
    {
        money = money + cash;
        no_vehicles = no_vehicles + passed;
    }

    TollCars(unsigned int passed)
    {
        no_vehicles = no_vehicles + passed;
    }

    int vehicles()
    {
        return no_vehicles;
    }

    void display()
    {
        cout << "\nCash collected: $" << money;
    }
};

int main()
{

    int no_cars;

    char choice;

    TollCars paid, un_paid;
    int quit = 0;
    while (quit != 1)
    {
        cout << "\nEnter 'p' if vehicle paid. if did not paid then 'n', \nelse enter 'q' to quit: ";
        cin >> choice;

        switch (choice)
        {
        case 'p':
            paid = TollCars(0.5, 1);
            break;
        case 'n':
            un_paid = TollCars(1);
            break;

        case 'q':
            quit = 1;
            break;
        default:
            cout << "\nYou entered an invalid choice!!";
            break;
        }
    }

    paid.display();

    if (choice == 'p')
    {
        cout << "\nNumber of vehicles: " << paid.vehicles()<< endl;
    }
    else
    {
        cout << "\nNumber of vehicles: " << un_paid.vehicles()<< endl;
    }
    
    
}