#include<iostream>
using namespace std;
class calculator
{
    void display()
    public:
    int a,b;

    cout<<"enter value of a:";
    cin>>a;

     cout<<"enter value of b:";
    cin>>b;

    try
    {
        if (b==0)
        {
            trow b;
        }
        else
        {
            cout<<a/b;
        }
    }
    catch(int b)
    {
        cout<<"the number is not divisible by 0";
    }
};
int main()
{
    calculator c1;
    c1.display();
    
    return 0;
}
