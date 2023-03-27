#include <iostream>
#include <string>
using namespace std;

class empData
{
	int empCode, day, month, year;
	string name;

public:
	static int cDay, cMonth, cYear, count;

	empData()
	{
	}

	empData(string name, int empCode, int day, int month, int year)
	{
		this->name = name;
		this->empCode = empCode;
		this->day = day;
		this->month = month;
		this->year = year;
	}

	static void currentDate()
	{
		cout << "\nEnter the Date, ";
		cout << "\nDay: ";
		cin >> cDay;
		cout << "\nMonth: ";
		cin >> cMonth;
		cout << "\nYear: ";
		cin >> cYear;
	}

	void tenure()
	{
		if ((cYear - year) > 3)
		{
			cout << "\nEmployee tenure is more than 3 years!";
			count++;
		}
		else
		{
			cout << "\nEmployee tenure is not more than 3 years!";
		}
	}

	void display_senior()
	{
		cout << "\n\nNumber of senior employees is: " << count;
	}
};
// Static variables
int empData::cDay = 0;
int empData::cMonth = 0;
int empData::cYear = 0;
int empData::count = 0;

int main()
{
	int empCode, day, month, year;
	string name;

	int x;

	cout << "\nEnter the number of employees: ";
	cin >> x;

	empData emp[x], obj;
	obj.currentDate();

	for (int i = 0; i < x; i++)
	{
		cout << "\n\n=========== Employee #" << i + 1 << " ===========";

		cout << "\n\nEnter the employee name: ";
		cin >> name;

		cout << "\nEnter employee code: ";
		cin >> empCode;

		cout << "\nEnter Date of joining, ";
		cout << "\nDay: ";
		cin >> day;

		cout << "\nMonth: ";
		cin >> month;

		cout << "\nYear: ";
		cin >> year;

		emp[i] = empData(name, empCode, day, month, year);
		emp[i].tenure();
	}

	obj.display_senior();
	return 0;
}