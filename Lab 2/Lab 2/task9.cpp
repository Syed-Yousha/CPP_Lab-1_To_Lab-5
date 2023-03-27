#include <iostream>
using namespace std;

void input(float *, float *);
void cal(float, float, float *, float *);
void output(float, float, float, float);

int main()
{

jump:
    // INPUT
    float foots, inches;
    input(&foots, &inches);

    // Calculation
    float meter, cm;
    cal(foots, inches, &meter, &cm);

    // OUTPUT
    output(foots, inches, meter, cm);

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

void input(float *foots, float *inches)
{
    // float foots, inches;
    cout << "\nEnter the length in foots: ";
    cin >> *foots;
    cout << "\nEnter the length in inches: ";
    cin >> *inches;
}

void cal(float foots, float inches, float *meter, float *cm)
{
    *meter = foots * 0.3048;
    *cm = inches * 2.54;
}

void output(float foots, float inches, float meters, float cm)
{
    cout << endl
         << foots << " foots => " << meters << " meters" << endl;

    cout << endl
         << inches << " inches => " << cm << " cm's" << endl;
}