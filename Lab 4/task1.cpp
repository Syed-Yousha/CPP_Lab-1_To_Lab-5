#include <iostream>
using namespace std;

class StudentRecord
{
    string name;
    int id, sem;

public:
    StudentRecord()
    {
        this->name = "NaN";
        this->id = 0;
        this->sem = 0;
    }

    StudentRecord(string name, int id, int sem)
    {
        this->name = name;
        this->id = id;
        this->sem = sem;
    }

    void getRecord()
    {
        cout << "\nStudent name is : " << name;
        cout << "\nStudent id is : " << id;
        cout << "\nStudent current semester is : " << sem;
    }
};

int main()
{
    string name;
    int id, sem;

    StudentRecord obj[5];

    // Inputs
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n=========== Student #" << i + 1 << " ===========";

        cout << "\nEnter your name: ";
        cin >> name;

    id:
        cout << "\nEnter your 4-digits id: ";
        cin >> id;

        if (id < 1000 || id > 9999)
        {
            cout << "\nPlease enter a 4-digit id!!";
            goto id;
        }

        cout << "\nEnter your Current semester: ";
        cin >> sem;

        obj[i] = StudentRecord(name, id, sem);
    }

    // Getting Records
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n=========== Student #" << i + 1 << " ===========";
        obj[i].getRecord();
    }
}