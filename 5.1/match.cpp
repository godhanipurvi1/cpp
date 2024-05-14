#include<iostream>
using namespace std;
class cricket
{
    public:
        int getTotalOver()
        {
            return 20;
        }
};
class testmatch:public cricket
{
      public:
        int getTotalOver()
        {
            return 100;
        }
};
int main()
{
    testmatch t;
    cout<<"total over:"<<t.getTotalOver()<<endl;
    cout<<"total over:"<<t.cricket::getTotalOver();
    return 0;
}