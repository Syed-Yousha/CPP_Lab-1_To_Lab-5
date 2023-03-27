#include <iostream>
using namespace std;

float windchill(float, float);

int main()
{
    float wind, temp, W;

    cout << "\nEnter the speed of wind in m/s: ";
    cin >> wind;
    cout << "\nEnter the temperature: ";
    cin >> temp;

    // Calculating windchill
    if (temp <= 10)
    {
        W = windchill(temp, wind);
        cout << "\n\nThe value of windchill => " << W << " degree celcius";
    }
    else
    {
        cout << "\n\nYou entered an invalid temperature for Windchill calculation!! (t <= 10) ";
    }

    return 0;
}

float windchill(float temp, float wind)
{
    float W;

    W = (13.12 + 0.6215 * temp) - (11.37 * wind * 0.16 + 0.3965 * temp * wind * 0.016);

    return W;
}
