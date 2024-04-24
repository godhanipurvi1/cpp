
#include<iostream>
#include<string>
using namespace std;

class car{
private:
	
	int car_id;
 string car_company_name;
 string car_color;
 string car_model;
 int car_release_year;
 
 public:
 void setdata()
 {

 	cout<<"car id:"<<endl;
	 cin>>car_id;
 	cout<<"car company name:"<<endl;
	 cin>>car_company_name;
 	cout<<"car color:"<<endl;
	 cin>>car_color;
 	cout<<"car model:"<<endl;
	 cin>>car_model;
 	cout<<"car release year:"<<endl;
	 cin>>car_release_year;
	  
 }
 
void getdata()
{
	cout<<"car id:"<<car_id<<endl
	<<"car company name:"<<car_company_name<<endl
	<<"car color:"<<endl<<car_color<<endl
	<<"car model:"<<endl<<car_model<<endl
	<<"car release year:"<<endl<<car_release_year<<endl;
}
	};
	
int main()
{
	car c,c1;
	
	c.setdata();
	c1.setdata();
	c.getdata();
	c1.getdata();
	
return 0;	
}
