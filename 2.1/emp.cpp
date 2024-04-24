#include<iostream>
#include<string>
using namespace std;
class emp{
private:
	int	emp_id;
 	string	emp_name;
 	int emp_age;
 	string emp_role;
 	int emp_salary;
	string emp_city;
 	int emp_experience;
 	string emp_company_name;
 	
public:
 		void setdata()
 		{
 			cout<<"enter id:\t";
 			cin>>emp_id;
 			
 			cout<<"enter name:\t";
 			cin>>emp_name;
 			
 			cout<<"enter age:\t";
 			cin>>emp_age;
 			
 			cout<<"enter role:\t";
 			cin>>emp_role;
 			
 			cout<<"enter salary:\t";
 			cin>>emp_salary;
 			
 			cout<<"enter city:\t";
 			cin>>emp_city;
 			
 			cout<<"enter experciance:\t";
 			cin>>emp_experience;
 			
 			cout<<"enter company name:\t";
 			cin>>emp_company_name;
		 }
		 void getdata()
		 {
		 	
		 	cout<<"id:\t"<<emp_id<<endl
			 <<"name:\t"<<emp_name<<endl
			 <<"age:\t"<<emp_age<<endl
			 <<"role:\t"<<emp_role<<endl
			 <<"salary:\t"<<emp_salary<<endl
			 <<"city:\t"<<emp_city<<endl
			 <<"expeience:"<<emp_experience<<endl
			 <<"name of companyy:"<<emp_company_name<<endl<<endl;
		 }

};


int main()
{
	
	emp e,e1,e2,e3,e4;
	cout<<"1st employee details:"<<endl<<"-----------------------------------------"<<endl;
		
		e.setdata();
		cout<<"2nd employee details:"<<endl<<"-----------------------------"<<endl;
		e1.setdata();
			cout<<"3nd employee details:"<<endl<<"---------------------------------"<<endl;
			e2.setdata();
			cout<<"4th employee details:"<<endl<<"-------------------------------------"<<endl;
			e3.setdata();
			cout<<"5th employee details:"<<endl<<"-----------------------------------------------"<<endl;
			e4.setdata();
		
		
		e.getdata();
		e1.getdata();
		e2.getdata();
		e3.getdata();
		e4.getdata();
		
			
		return 0;
		
}
