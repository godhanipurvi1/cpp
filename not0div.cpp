#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"enetr a number:";
    cin>>a;
    
    cout<<"enetr a number:";
    cin>>b;
    
    try
    {
        if(b==0)
        {
            cout<<"number is not divisible by 0";
        }
        else
        {
            cout<<a/b;
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