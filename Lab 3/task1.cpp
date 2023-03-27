#include <iostream>
#include <cmath>
using namespace std;

class calc
{
private:
	float h;
	float r;
	float SA;

public:
	// Constructors
	void sett(float height, float radius){
		this->h = height;
		this->r = radius;
	}

	// Methods
	int S_Area()
	{
		this->SA = (2 * (22 / 7) * r * (h + r));
		cout << "\nThe value of surface area is => " << round(SA/(22/7))<<" pie";
	}
	
};

int main()
{
	float height, radius;
	cout << "\nEnter the height: ";
	cin >> height;

	cout << "\nEnter the radius: ";
	cin >> radius;

	// initializing variables
	calc obj;
	obj.sett(height, radius);
	obj.S_Area();
}
