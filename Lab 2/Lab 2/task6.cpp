#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void anagram(string first, string last)
{
	int f_len = first.length(), l_len = last.length();
	char temp;

	if (f_len == l_len)
	{
		sort(first.begin(), first.end());
		sort(last.begin(), last.end());

		// cout<<first<<endl<<last;
		if (first == last)
		{
			cout << "\nstring is Anagram";
		}
		else
		{
			cout << "\nstring is not an Anagram";
		}
	}
	else
	{
		cout << "\nstring is not an Anagram";
	}
}

int main()
{
	int size;
	cout << "\n\nHow many names anagrams you want to find: ";
	cin >> size;
	string fname[size], lname[size];

	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter the person #" << i + 1 << " first name: ";
		cin >> fname[i];

		cout << "\nEnter the person #" << i + 1 << " last name: ";
		cin >> lname[i];
	}

	for (int i = 0; i < size; i++)
	{
		anagram(fname[i], lname[i]);
	}

	return 0;
}