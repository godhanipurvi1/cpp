#include<iostream>
#include<string>
using namespace std;
class railway
{
    private:
        int train_number;
        string train_name;
        string source;
        string destination;
        int train_time;

    public:
        railway()
        {
            cout<<"train number:\t";
            cin>>train_number;
            cout<<"train name:\t";
            cin>>train_name;
            cout<<"source:\t";
            cin>>source;
            cout<<"destination:\t";
            cin>>destination;
            cout<<"train time:\t";
            cin>>train_time;
        }
        void railwayinfo()
	        {
	            cout<<"train number:\t"<<train_number
	            <<"train name:\t"<<train_name
	            <<"source:\t"<<source
	            <<"destination:\t"<<destination
	            <<"train time:\t"<<train_time;
	        }
        void serchbynum()
        {
        	int n;
        	cout<<"enter train number to search:\n";
    		cin>>n;
    	
        	for(int i=0;i<n;i++)
			{
				if(n=train_number)
				{
			cout<<"train number:\t"<<train_number<<endl;
            cout<<"train name:\t"<<train_name;
            cout<<"source:\t"<<source;
            cout<<"destination:\t"<<destination;
            cout<<"train time:\t"<<train_time;
				}
				}	
		}
        void third()
        {
            int n3;
            cout<<"record of railways:";
            cin>>n3;

            for(int i=1;i<=n3;i++)
            {
            
			cout<<"train number:\t";
            cin>>train_number_;
            cout<<"train name:\t";
            cin>>train_name;
            cout<<"source:\t";
            cin>>source;
            cout<<"destination:\t";
            cin>>destination;
            cout<<"train time:\t";
            cin>>train_time;
        }
            void display();
            {
            	cout<<"train number:\t"<<train_number
	            <<"train name:\t"<<train_name
	            <<"source:\t"<<source
	            <<"destination:\t"<<destination
	            <<"train time:\t"<<train_time;
			}
}

        
            
            
        

};

int main()
{
	int choice;
	while(true)
	{
	
	cout<<"1.dispay all records\n";
	cout<<"2.display record by train number\n:";
	cout<<"3.input record by number\n";
	cout<<"4.exit\n";
	cin>>choice; 
	
	
    switch(choice)
    {
    	case 1:
    		railway();
    		break;
    		
		case 2:
    		void railwayinfo();
    		
    		
			void serch();	
    		break;
    	
    	case 3:
    		void third();
    		
    		break;
    	
    	
	}
	

}
}
