#include <iostream>
using namespace std;

int LCM(int, int);

int GCD(int, int, int);

// MAIN FUNCTION
int main()
{
	//INPUT
	int num1, num2, lcm, gcd;
	cout << "\nEnter interger #1: ";
	cin >> num1;
	cout << "\nEnter interger #2: ";
	cin >> num2;

	char choice;
	cout << "\nEnter 'L/l' for LCF or 'G/g for gcd: ";
	cin >> choice;

	// Finding LCM & GCD functions
	if (choice == 'L' || choice == 'l')
	{
		lcm = LCM(num1, num2);
		cout << "\nlcm is: " << lcm;
	}
	else if (choice == 'G' || choice == 'g')
	{
		lcm = LCM(num1, num2);
		gcd = GCD(num1, num2, lcm);
		cout << "\nGCD is: " << gcd;
	}
	else
	{
		cout << "\nYou entered an invalid chocie";
	}
}

int LCM(int num1, int num2)
{
	static int lcm = 1, divr = 1;

	if (num1 == 1 && num2 == 1)
	{
		return (1);
	}
	else
	{
		divr++;
		if (num1 % divr == 0 || num2 % divr == 0)
		{
			lcm *= divr;
			if (num1 % divr == 0)
			{
				num1 /= divr;
			}
			if (num2 % divr == 0)
			{
				num2 /= divr;
			}
		}

		if (divr > num1)
		{
			lcm *= num1;
			num1 = 1;
		}
		if (divr > num2)
		{
			lcm *= num2;
			num2 = 1;
		}

		LCM(num1, num2);
	}

	return lcm;
}

int GCD(int num1, int num2, int lcm)
{
	int gcd = (num1 * num2) / lcm;
	return gcd;
}