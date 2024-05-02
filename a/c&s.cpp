#include<iostream>

using namespace std;

class a
{
    protected:
    int n;
    public:
    
    

};

class  square:public a
{
    public:
    void setdata()
    {
    cout <<"enter any number:";
    cin>>n;
    }
    void getdata()
    {
        int a;
        a=n*n;

        cout<<" square :"<<a<<endl;

    }
};

class cube:public a
{
    public:
    void setdata()
    {
    cout <<"enter any number:";
    cin>>n;
    }
    void getdata()
    {
        int a1;
        a1=n*n*n;

        cout<<" cube:"<<a1<<endl;

    }
};

int main()
{
    square s;
    cube c;
    
    s.setdata();
    s.getdata();
    c.setdata();
    c.getdata();
    
}
