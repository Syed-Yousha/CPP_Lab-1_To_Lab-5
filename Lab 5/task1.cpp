#include <iostream>
#include <string>
using namespace std;

class empData
{
	int empCode, day, month, year, cDay, cMonth, cYear;
	string name;

public:
	void setEmp(string name, int empCode, int day, int month, int year)
	{
		this->name = name;
		this->empCode = empCode;
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void currentDate()
	{
		cout << "\nEnter the current day: ";
		cin >> cDay;
		cout << "\nEnter the current month: ";
		cin >> cMonth;
		cout << "\nEnter the current year: ";
		cin >> cYear;
	}

	void tenure()
	{
		if ((cYear - year) > 3)
		{
			cout << "\nEmployee tenure is more than 3 years!";
		}
		else
		{
			cout << "\nEmployee tenure is not more than 3 years!";
		}
	}
};

int main()
{
	int empCode, day, month, year;
	string name;

	cout << "\nEnter the employee name: ";
	getline(cin, name);

	cout << "\nEnter employee code: ";
	cin >> empCode;

	cout << "\nEnter day of joining: ";
	cin >> day;

	cout << "\nEnter month of joining: ";
	cin >> month;

	cout << "\nEnter year of joining: ";
	cin >> year;

	empData emp;

	emp.setEmp(name, empCode, day, month, year);
	emp.currentDate();
	emp.tenure();
}