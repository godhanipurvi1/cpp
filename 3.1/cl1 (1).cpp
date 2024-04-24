#include<iostream>
#include<string>
using namespace std;

class student
{
private:
	int stu_id;
 	string stu_name;
 	int stu_age;
 	string stu_course;
 	string stu_city;
 	string stu_email;
 	string stu_college;
 	

public:
	void setdata()
	{
		
	
		cout<<"enter id:"<<endl;
		cin>>stu_id;
	
		cout<<"enter name:"<<endl;
		cin>>stu_name;
	
		cout<<"age:"<<endl;
		cin>>stu_age;
	
		cout<<"course:"<<endl;
		cin>>stu_course;
	
		cout<<"city:"<<endl;
		cin>>stu_city;
	
		cout<<"email:"<<endl;
		cin>>stu_email;
	
		cout<<"collage name:"<<endl;
		cin>>stu_college;
		
	}
	
	
void getdata()
	{
		
		cout<<"id:"<<stu_id<<endl;
		cout<<"name:"<<stu_name<<endl;
		cout<<"age:"<<stu_age<<endl;
		cout<<"course:"<<stu_course<<endl;
		cout<<"city:"<<stu_city<<endl;
		cout<<"email:"<<stu_email<<endl;
		cout<<"collage name:"<<stu_college<<endl;
		
	}
};

int void()
		{
			student s,s1,s2,s3,s4;
			cout<<"--------------student details----------"<<endl;
			s.setdata();
			s1.setdata();
			s2setdata();
			s3.setdata();
			s4.setdata();
			s.getdata();
			s1.getdata();
			s2.getdata();
			s3.getdata();
			s4.getdata();
			return 0;
 		} 
