#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int emp_id, salary;
};

struct Organisation
{
    string org_name, org_num;
    int org_size;
    struct Employee emp;
} org;

int main()
{
    org.org_size = 123;
    org.org_name = "NU-Fast";
    org.org_num = "NUFAST123ABC";
    org.emp.emp_id = 127;
    org.emp.name = "Linus Sebastian";
    org.emp.salary = 400000;

    cout << "\n\nThe size of structure organisation: " << org.org_size
         << "\n\nOrganisation Name: " << org.org_name
         << "\n\nOrganisation Number: " << org.org_num
         << "\n\nEmployee id: " << org.emp.emp_id
         << "\n\nEmployee name: " << org.emp.name
         << "\n\nEmployee Salary: " << org.emp.salary;
}