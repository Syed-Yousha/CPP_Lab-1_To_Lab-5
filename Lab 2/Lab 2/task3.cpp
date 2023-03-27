#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "\nswapping.... ";
    
    cout << "\nnum#1 is: " << a;
    cout << "\nnum#2 is: " << b;
}

int main()
{
    int a, b;
    cout << "\nEnter num#1: ";
    cin >> a;

    cout << "\nEnter num#2: ";
    cin >> b;

    swap(a, b);
}