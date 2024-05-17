#include<iostream>
using namespace std;
class shape
{
    public:
        float color;
        int area;
        int r,l,w;
};
class circle:public shape
{
    public:
    void setdata()
    {
        cout<<"enter radious of circle:";
        cin>>r;
    }

    void diplay()
    {
    	color=2*2.14*r*r;
        cout<<"area of circle is:"<<color<<endl;
    }
};
class rectangle:public shape
{
    public:
    void setdata2()
    {
        cout<<"enter lenght of rectangle:"<<endl;
        cin>>l;

        cout<<"enter width of rectangle:"<<endl;
        cin>>w;

    }

    void display()
    {
        cout<<"area of circle is:"<<l*w<<endl;
    }
};
int main()
{
    shape *p;
    shap c1;
    p = &c1;



    p->c1.display()
    p->c2.display()
    
    return 0;
}