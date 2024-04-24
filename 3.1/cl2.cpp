#include<iostream>
#include<string>
using namespace std;

class cust
{
private:
	int cust_id;
	string cust_name;
	int cust_age;
	string cust_city;
	int cust_mobile_number;
 	int cust_simcard_validity;
	string cust_telecom_brand_name ;

public:
	void setdata()
	{
		
	
		cout<<"enter id:"<<endl;
		cin>>cust_id;
	
		cout<<"enter name:"<<endl;
		cin>>cust_name;
	
		cout<<"age:"<<endl;
		cin>>cust_age;
	
	
		cout<<"city:"<<endl;
		cin>>cust_city;
		
		cout<<"number:"<<endl;
		cin>>cust_mobile_number;
		
		cout<<"simcard validataion:"<<endl;
		cin>>cust_simcard_validity;
		
		cout<<<"telecom brand name:"<<endl;
		cin>>cust_telecom_brand_name;
		
		
	}
	
	
void getdata()
	{
		
		cout<<"id:"<<cust_id<<endl;
		cout<<"name:"<<cust_name<<endl;
		cout<<"age:"<<cust_age<<endl;
		cout<<"city:"<<cust_city<<endl;
		cout<<"number:"<<cust_mobile_number<<endl;
		cout<<"simcard validation:"<<cust_simcard_validaytion<<endl;
		cout<<"telecom brand name:"<<cust_telecom_brand_name<<endl;
		
		
	}
};

int void()
		{
			cust s,s1,s2,s3,s4;
			cout<<"--------------customer details----------"<<endl;
			s.setdata();
			s1.setdata();
			s2.setdata();
			s3.setdata();
			s4.setdata();
			
			s.getdata();
			s1.getdata();
			s2.getdata();
			s3.getdata();
			s4.getdata();
			return 0;
 		} 
