#include<iostream>
#include<string>
using namespace std;

class hotel
{
    private:
       
	    int hotel_id;
        string hotel_name;
        string hotel_type;
        int hotel_rating;
        string hotel_location;
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;
    public:
        void setdata()
{   
            cout<<"id:"<<endl;
            cin>>hotel_id;
            cout<<"name:"<<endl;
            cin>>hotel_name;
            cout<<"type:"<<endl;
            cin>>hotel_type;
            cout<<"rating:"<<endl;
            cin>>hotel_rating;
            cout<<"location:"<<endl;
            cin>>hotel_location;
            cout<<"establish:"<<endl;
            cin>>hotel_establish_year;
            cout<<"staff quantity:"<<endl;
            cin>>hotel_staff_quantity;
            cout<<"room quantity:"<<endl;
            cin>>hotel_room_quantity;
}

        void getdata()
        {
            cout<<"id:"<<hotel_id<<endl
            <<cout<<"name"<<hotel_name<<endl
            <<cout<<"type"<<hotel_type<<endl
            <<cout<<"rating"<<hotel_rating<<endl
            <<cout<<"location"<<hotel_location<<endl
            <<cout<<"establish"<<hotel_establish_year<<endl
            <<cout<<"staff quantity"<<hotel_staff_quantity<<endl
            <<cout<<"room quantity"<<hotel_room_quantity<<endl;
        }

};

int main()
{
	hotel h;
	int n;
	int arr[n];
	cout<<"enter array size:";
	cin>>n;
    
    for(int i=0;i<n;i++)
    {
        h.setdata();
    }
    for(int i=0;i<n;i++)
    {
        h.getdata();
    }

    return 0;

}
