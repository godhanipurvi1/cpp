#include<iostream>
using namespace std;

class time{
private:
	int second,h,m,s;
public:
	void setdata()
{
	cout<<"enter seconds:"<<endl;
	cin>>second;
}
	void getdata()
	{
		h=second/3600;
		m=(second-h/3600)/60;
		s=second-h/3600-m*60;
		
		cout<<"time"<<h<<":"<<m<<":"<<s<<":"<<endl;
	}
};
int main()
{
	time t;
	t.setdata();
	t.getdata();
	
}
