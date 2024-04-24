#include<iostream>
using namespace std;

int main()
{
	int size;
	int arr[size];
	
	cout<<"enter the size of an array:";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter the element:";
		cin>>arr[i];
	}
	
	cout<<"arry elements are:"<<endl;
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<""<<endl;
	}
	
	return 0;
}
