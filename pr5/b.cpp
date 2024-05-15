#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter your age:";
    cin>>a;

    try{
        if(a>18)
            {
                throw 1;
            }
        else {
            cout<<"you are eligible vote";
        }
    }
        catch(double n)
        {
            cout<<"you are not eligible vote";
        }
        catch(...)
        {
            cout<<"general exeption error";
        }
        return 0;
    }

