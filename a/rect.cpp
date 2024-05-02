#include<iostream>

using namespace std;

class shap
{
    protected:
    int w;
    int h;
    int a;
    int b;
    int l;

};

class rect: public shap
{
    public:
    void setdata()
    {

        cout<<"enter leanth:"<<endl;
        cin>>l;

        cout<<"enter height:"<<endl;
        cin>>b;

        a=l*b;

        cout<<"area of rectangle:"<<a<<endl;
    }
};

class triangle: public shap
{
    public:
    void setdata()
    {       
        cout<<"enter leanth:"<<endl;
        cin>>b;

        cout<<"enter height:"<<endl;
        cin>>h;

        a=0.5*b*h;

        cout<<"area of triangle:"<<a<<endl;
    }
};

int main()
{

    rect r;
    triangle t;

    r.setdata();
    t.setdata();
    return 0;
    
}

