#include<iostream>
using namespace std;
class employee
{
    protected:
        int salary;

    public:
    void setdata()
    {
        cout<<"enter salary :";
        cin>>salary;
    }
    void getdata()
    {
        cout<<"salary"<<salary;
    }

    employee operator+(employee e2)
    {
        employee e3;
        e3.salary=salary+e2.salary;
        return e3;
    }
};
int main()
{
    employee e1,e2,e3;
    e1.setdata();
    e2.setdata();
    e3=e2+e1;
    e3.getdata();

    return 0;
}
