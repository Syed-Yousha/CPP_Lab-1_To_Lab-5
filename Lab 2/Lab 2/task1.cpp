#include <iostream>
using namespace std;

int fact(int num);

int main()
{
	int num, ans;

	cout << "\nEnter any integer to find it's factorial: ";
	cin >> num;

	ans = fact(num);
	cout << "\nThe factorial is: "<<ans<<endl;

}

int fact(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);
	}

}