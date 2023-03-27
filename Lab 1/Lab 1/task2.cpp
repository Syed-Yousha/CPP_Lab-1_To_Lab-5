#include <iostream>
using namespace std;

int main()
{
	float weight, height, BMI;
	char choice;
	cout << "Enter your wight in Pounds & height in inches (P)\n OR\n Enter your wight in kg & height in meters (K)\n:";
	cin >> choice;

	if (choice == 'P' || choice == 'p')
	{
		cout << "\nEnter your weight in (pounds): \n";
		cin >> weight;
		cout << "\nEnter your height in (inches): \n";
		cin >> height;

		BMI = (weight * 703) / (height * height);
	}
	else if (choice == 'K' || choice == 'k')
	{
		cout << "\nEnter your weight in (kg): \n";
		cin >> weight;
		cout << "\nEnter your height in (meters): \n";
		cin >> height;

		BMI = weight / (height * height);
	}

	if (BMI >= 30)
	{
		cout << "Your BMI is : " << BMI << "\tStatus: Obese";
	}
	else if (BMI >= 25)
	{
		cout << "Your BMI is :" << BMI << "\tStatus: Overweight";
	}
	else if (BMI >= 18.5)
	{
		cout << "Your BMI is :" << BMI << "\tStatus: Normal";
	}
	else if (BMI < 18.5)
	{
		cout << "Your BMI is :" << BMI << "\tStatus: Underweight";
	}
}
