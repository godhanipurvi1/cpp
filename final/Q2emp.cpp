#include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
        string name,designation;
        int salary;

    public:
        void setdata()
        {
            cout<<"enter name:";
            cin>>name;

            cout<<"enter salary:";
            cin>>salary;

            cout<<"enter designation:";
            cin>>designation;
            
        }
        void getdata()
        {
            cout<<"name:"<<name<<endl
            <<"salary:"<<salary<<endl
            <<"designation"<<designation<<endl;
        }
};
int main()
{
    employee emp;
    emp.setdata();
    emp.getdata();
    
    return 0;
}

