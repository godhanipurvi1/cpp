#include<iostream>
using namespace std;

class abcd
{
    public:
    void display()
    {
    int a,b;

    cout<<"enter a number";
    cin>>a;

    cout<<"enter a number";
    cin>>b;

   
        try
        {
            if(b==0)
            {
                throw 1;
            }
            else
            {
                cout<<"divition"<< a/b;
            }
        }

            catch(int n)
            {
                cout<<"exception accurred";
            }

            catch(...)
            {
                cout<<"general exception accurr";
            }

        }
    
};
int main()
{
    abcd a1;
  
    a1.display();

    return 0;
}