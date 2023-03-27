#include <iostream>
using namespace std;

class LeCream
{
    string flavour, wafer;
    int scopes, amount;

public:
    LeCream() {}
    LeCream(string flavour, int scopes)
    {
        this->flavour = flavour;
        this->scopes = scopes;

        if (scopes == 2)
        {
            amount = 100;
        }
        else
        {
            amount = 150;
        }
        
    }

    void topping(char choice)
    {

        if (choice == 'Y')
        {
            amount += 10;
            wafer = "yes";
        }
        else
        {
            wafer = "no";
        }
        
    }

    void reciept()
    {
        cout<<"\n========== Total bill ==========\n";

        if (scopes == 2)
        {
            cout<<"\nNo. of scopes: "<<scopes<<" : Rs.100";
        }
        else
        {
            cout<<"\nNo. of scopes: "<<scopes<<" : Rs.150";
        }

        if (wafer[1] == 'y')
        {
            cout<<"\nwafer on ice cream:"<<wafer<<" : Rs.10";
        }
        else
        {
               cout<<"\nwafer on ice cream:"<<wafer<<" : Rs.0";
        }
        
        cout<<"\nflavour: "<<flavour;
        cout<<"\n\nTotal bill => "<<amount;
    }

};

int main()
{
    string flavour;
    char choice;
    int scopes;

//INPUT and validation
jump:
    cout << "\nWhat flavour ice cream you want,\nChocolate(C)\nVanilla(V)\nStrawberry(S)\nMango(M)\n\nEnter your choice: ";
    cin >> choice;

    // Uppercase
    choice = (char)toupper(choice);

    switch (choice)
    {
    case 'C':
        flavour = "Chocolate";
        break;
    case 'V':
        flavour = "Vanilla";
        break;
    case 'S':
        flavour = "Strawberry";
        break;
    case 'M':
        flavour = "Mango";
        break;
    
    default:
        cout<<"\nYou entered an invalid flavour!\n";
        goto jump;
        break;
    }

    cout << "\nEnter the number of scopes (NOTE: scopes can be 2 or 3 only!): ";
    cin >> scopes;

    if (scopes < 2 || scopes > 3)
    {
        cout << "\nYou entered an invalid number of scopes!!";
        exit(1);
    }

    LeCream ice(flavour, scopes);

    //toppings
    char wafer;
    cout<<"\nDo you want vanilla wafers with your ice cream [ Press Y(yes) or N(no)]: ";
    cin>>wafer;

    wafer = (char)toupper(wafer);
    ice.topping(wafer);
    ice.reciept();

    return 0;
}