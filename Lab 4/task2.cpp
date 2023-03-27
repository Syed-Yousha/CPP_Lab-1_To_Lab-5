#include <iostream>
using namespace std;

class Scheme
{
    int nic;

public:
    Scheme(int nic)
    {
        this->nic = nic;
        cout << "\nThe person on the registered NIC has been included in the government scheme";
    }

    ~Scheme() {}
};

int main()
{
    int nic;

    cout << "\nEnter your Nic, without dashes, for Goverment scheme \n(enter any alphabet to exit): ";
    cin >> nic;

    if (nic == NULL)
    {
        cout << "\nThe person does not want the scheme";
    }
    else
    {
        Scheme obj(nic);
    }
}