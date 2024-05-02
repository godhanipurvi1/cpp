#include<iostream>
#include<string>
using namespace std;

class A
{
    protected:
    int id;
    string name;
    string role;
    int salary;
    string experience;
    string  comp_name;
    string address;
    string email;
    int contact;

    void setdataa()
    {
        cout<<"enter id :";
        cin>>id;

        cout<<"enter name:";
        cin>>name;

        cout<<"enter role:";
        cin>>role;

    }

};

class B: public A
{
    public:
     void setdatab()
     {
        cout<<"enter salary:";
        cin>>salary;

        cout<<"enter experience:";
        cin>>experience;

     }
};

class C:public B
{
    public:
    void getdata()
    {
        cout<<"name:"<<name
        <<endl<<"role:"<<role<<endl
        <<"salary:"<<salary<<endl;
    }
    void setdatac()
    {
        cout<<"enter companuy name:";
        cin>>comp_name;

        cout<<"enter address:";
        cin>>address;
    }
};

class D:public C
{
    public:
    void setdatad()
    {
        cout<<"enter email:";
        cin>>email;

        cout<<"enter contect:";
        cin>>contact;
    }

    void setdata()
    {
        cout<<"id:"<<id<<"name:"<<name
        <<endl<<"role:"<<role<<endl
        <<"salary:"<<salary<<endl<<"experience:"<<experience<<"company name:"<<comp_name<<endl<<
        "address:"<<address<<endl<<"email:"<<email<<endl<<"contect:"<<contact<<endl;
    }
};

int main()
{

    D d1;
    d1.setdata();
    d1.setdatab();
    d1.setdatac();
    d1.setdatad();
    d1.getdata();

}

