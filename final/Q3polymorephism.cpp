#include<iostram>
using namespace std;
class shape
{
    private:
        int color;
        int area;
        
    public:
    void setting()
    {
        
    }
    void getting()
    {
        color=2*2.14*r*r;
        area=l*b;
    }
    virtual void display()
    {
        cout<<"area :"<<endl;
    }
};
class cricle:public shape
{
    void getdata()
    {
        cout<<"enter radious of circle:";
        cin>>r;
    }

    void dispaly()
    {
        cout<<"area of circle is:"<<color;
    }
};
class rectangle:public shape
{
    void getdata()
    {
        cout<<"enter lenght of rectangle:";
        cin>>r;

        cout<<"enter width of rectangle:";
        cin>>w;

    }

    void display()
    {
        cout<<"area of circle is:"<<area;
    }
};
int main()
{
    shape *p;
    circle c1;
    rectangle r1;
    p = c1;


    c1.getdata()
    p->c1.display()
    c2.getdata()
    p->c2.display()
    
    return 0;
}