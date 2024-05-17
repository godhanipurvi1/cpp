#include<iostream>
using namespace std;
class rectangle
{
    protected:
     int l,b;

    public:
        void setdata()
        {
            cout<<"enter length of rectangle:";
            cin>>l;

            cout<<"enter length of rectangle:";
            cin>>b;
        }

        void getdata()
        {
            cout<<"area of rectangle:"<<l*b;
        }
};
int main()
{
    rectangle r;
    r.setdata();
    r.getdata();

    return 0;
}