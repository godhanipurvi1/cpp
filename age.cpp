#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"enetr a number:";
    cin>>a;
    
    try
    {
        if(a>18)
        {
            cout<<"you can vote";
        }
        else
        {
            cout<<"you can't vote wait "<<18-a<<" years";
        }
    }
    catch(double n)
    {
        cout<<"error occurs";
    }
    catch(...)
    {
        cout<<"error occurs";
    }
 return 0;   
}