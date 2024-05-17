#include<iostream>
using namespace std;
class animal
{
    virtual void sound()=0;
    virtual void move()=0;
};
class dog:public animal
{
    public:
        void sound()
        {
            cout<<"dog can bark\n";
        }
        void move()
        {
            cout<"it can walk\n";
        }
};
class bird:public animal
{
    public:
        void sound()
        {
            cout<<"bird sound\n";
        }
        void move()
        {
            cout<<"bird can fly"<<endl;
        }
};
int main()
{
    // animal *ptr;
    // animal a1;
    // ptr = &a1;

    // ptr -> sound();
    // ptr ->move();

    dog d1;
    bird b1;

    d1.sound();
    d1.move();
    b1.sound();
    b1.move();
    
	return 0;
}
