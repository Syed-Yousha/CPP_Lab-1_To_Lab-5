#include <iostream>
using namespace std;

struct Register
{
    string CourseName;
    int CourseId;
};

struct student
{
    string FirstName, LastName, email;
    int cellno;
    struct Register info;
} stud[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter the first name of student#" << i + 1 << ": ";
        cin >> stud[i].FirstName;

        cout << "\nEnter the last name of student#" << i + 1 << ": ";
        cin >> stud[i].LastName;

        cout << "\nEnter the email of student#" << i + 1 << ": ";
        cin >> stud[i].email;

        cout << "\nEnter the cell number of student#" << i + 1 << ": ";
        cin >> stud[i].cellno;

        cout << "\nEnter the Course Id of student#" << i + 1 << ": ";
        cin >> stud[i].info.CourseId;

        cout << "\nEnter the Course name of student#" << i + 1 << ": ";
        cin >> stud[i].info.CourseName;
    }

    cout << "\n\nFirstName\tLastName\tEmail\tCellNo\tCourseId\tCourseName";
    for (int i = 0; i < 2; i++)
    {
        cout << endl
             << stud[i].FirstName << "\t\t"
             << stud[i].LastName << "\t\t"
             << stud[i].email << "\t"
             << stud[i].cellno << "\t"
             << stud[i].info.CourseId << "\t\t"
             << stud[i].info.CourseName
             << endl;
    }
}