#include<iostream>
using namespace std;
int main()
{
    char p;
    
    cout<<"enetr a password:";
    cin>>p;
    
    try
    {
        if(p>='a'&& p<='z')
        {
            cout<<"password must contain uppercase";
        }
        else
        {
            cout<<"password is correct";
        }
    }
    catch(double p)
    {
        cout<<"error occurs";
    }
    catch(...)
    {
        cout<<"error occurs";
    }
 return 0;   
}