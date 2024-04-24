#include<iostream>
using namespace std;

class  distances{
private:
	int d1feet,d2feet,d1inch,d2inch,sumfeet,suminch;
	
public:
	void setdata(){
		
	
	cout<<"feet:"<<endl;
	cin>>d1feet;
	cout<<"inch:"<<endl;
	cin>>d1inch;
	
	cout<<"feet:"<<endl;
	cin>>d2feet;
	cout<<"inch:"<<endl;
	cin>>d2inch;
}

void getdata()
{
	sumfeet=d1feet+d2feet;
	suminch=d1inch+d2inch;
	
	cout<<"sum:"<<sumfeet<<"feet"<<suminch<<"inch"<<endl;
}
	
};

int main()
{
	
	distances d;
	d.setdata();
	d.getdata();
	
	return 0;
	
}
