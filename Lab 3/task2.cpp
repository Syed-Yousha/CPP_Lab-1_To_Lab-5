#include <iostream>
using namespace std;

class SalariedEmp
{
private:
	int salary, overtime, avg;

public:
	void inquiry(int salary, int overtime, int avg)
	{
		this->salary = salary;
		this->overtime = overtime;
		this->avg = avg;
	}

	void increment()
	{
		int bonus;
		if ( overtime == 1 )
		{
			bonus = salary * 0.1;
			salary += bonus;

			cout << "\n\nYour salary has been incremented: " << salary;
		}
		else
		{
			cout << "\n\nYou do not work over time!";
		}
	}

	void min_wage()
	{
		int inc;

		if ( salary < avg )
		{
			inc = salary * 0.05;
			salary += inc;
			cout << "\n\nYour salary after minimun salary increment: " << salary;
		}
		else
		{
			cout << "\n\nYour salary is above average!";
		}
	}
	
};


int main()
{

	SalariedEmp emp;

	//WORK INQUIRY
	int salary[4];
	bool overtime[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "\n\nEnter your current salary Employee #"<<i+1<<": ";
		cin >> salary[i];
		cout << "\n\nDo you want to work overtime ( 0 -> 'No', 1 -> 'Yes' ): ";
		cin >> overtime[i];

	}


	//Average
	int sum=0, avg=0;

	for (int i = 0; i < 4; i++)
	{
		sum += salary[i];
	}

	avg = sum / 4;

	//Functions
	for (int i = 0; i < 4; i++)
	{
		emp.inquiry(salary[i], overtime[i], avg);
		emp.increment();
		emp.min_wage();
	}


		
	return 0;
}
