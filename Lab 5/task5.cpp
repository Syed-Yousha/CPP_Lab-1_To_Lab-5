#include <iostream>
using namespace std;

class Laptop
{
    string brand, model;
    int serial, ram;
    float price, speed, sc_size;

public:

    void setLaptop(string brand, string model, int serial, int ram, float price, float speed, float sc_size)
    {
        this->brand = brand;
        this->model = model;
        this->serial = serial;
        this->ram = ram;
        this->price = price;
        this->speed = speed;
        this->sc_size = sc_size;
    }

    void alter_ram(int ram)
    {
        this->ram = ram;
    }

    void display()
    {
        cout<<"\n\n======= Laptop details =======\n";
        cout<<"\nBrand: "<<brand;
        cout<<"\nModel: "<<model;
        cout<<"\nSerial number: "<<serial;
        cout<<"\nRam: "<<ram;
        cout<<"\nPrice: "<<price;
        cout<<"\nProcessor speed: "<<speed;
        cout<<"\nScreen size: "<<sc_size;
    }
};

int main()
{
    string brand, model;
    int serial, ram;
    float price, speed, sc_size;

    cout<<"\nEnter the laptop brand: ";
    cin>>brand;
    cout<<"\nEnter the laptop model: ";
    cin>>model;
    cout<<"\nEnter the laptop serial: ";
    cin>>serial;
    cout<<"\nEnter the laptop ram: ";
    cin>>ram;
    cout<<"\nEnter the laptop price: ";
    cin>>price;
    cout<<"\nEnter the laptop processorspeed: ";
    cin>>speed;
    cout<<"\nEnter the laptop screen size: ";
    cin>>sc_size;

    Laptop obj;
    obj.setLaptop(brand, model, serial, ram, price, speed, sc_size);

    //Alter ram    
    char choice;
jump:  
    cout<<"\nDo you want to alter ram [Y(yes) or N(no)]: ";
    cin>>choice;
    choice = (char)toupper(choice);

    if (choice == 'Y' )
    {
        cout<<"\nEnter the memory of new ram: ";
        cin>>ram;
        obj.alter_ram(ram);
    }
    else if (choice != 'N')
    {
        cout<<"\nYou entered an invalid chocie!";
        goto jump;
    }

    //display data
    obj.display();
}