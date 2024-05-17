#include <iostream>
using namespace std;

class Admin
{
    string com_name;
    int man_salary, emp_salary;
    int total_staff;
    int total_annual_revenue;
    string can_terminate;

public:
    void setAdmin()
    {
        cout << "Enter The Name Of The Company : ";
        cin >> com_name;
        cout << "Enter the salary of the manager : ";
        cin >> man_salary;
        cout << "Enter the salary of the employee : ";
        cin >> emp_salary;
    }
    void getAdmin()
    {
        cout << "The Name Of The Company : " << com_name << endl;
        cout << "The salary of the manager : " << man_salary << endl;
        cout << "The salary of the employee : " << emp_salary << endl;
    };
};

    class Manager : public Admin
    {
    protected:
        int total_staff, total_annual_revenue;

    public:
        void setData()
        {
            cout << "Total staff of the company:  ";
            cin >> total_staff;
            cout << "Total annual revenue of the company : ";
            cin >> total_annual_revenue;
        }
        void GetData()
        {
            cout << "The quantity of the staff : " << total_staff << endl;
            cout << "The total annual revenue of the company : " << total_annual_revenue << endl;
        }
    };

    class Employee : public Manager
    {
    protected:
        string can_terminate;

    public:
        void setData()
        {
            cout << "Does compnay terminated or not : ";
            cin >> can_terminate;
        }
        void getData()
        {
            cout << "compnay terminated or not :- " << can_terminate << endl;
        }
    };
    int main()
{
    Admin a1;
    Manager m1;
    Employee e1;

    a1.setAdmin();
    m1.setData();
    e1.setData();

    a1.getAdmin();
    m1.GetData();
    e1.getData();

    return 0;
}