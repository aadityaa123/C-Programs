#include<iostream>
using namespace std;

class vehicle
{
	protected:
		int model_num;
		public:
			void accept()
			{
				cout<<"\n Enter the Model Number:- ";
				cin>>model_num;
			}
};
class car:public vehicle
{
	public:
		string c_name;
		float c_price;
		
		public:
			void get()
			{
				cout<<"\n Enter the Car Name:- ";
				cin>>c_name;
				cout<<"\n Enter the Car Price:- ";
				cin>>c_price;
			}
};
class bike:public car
{
	private:
		string b_name;
		int b_cc;
		
		public:
			void put()
			{
				cout<<"\n Enter the Bike Name:- ";
				cin>>b_name;
				cout<<"\n Enter the Bike CC Number:-";
				cin>>b_cc;
			}
			void display()
			{
				cout<<"\n Vehicle Number:- "<<model_num;
				cout<<"\n Car Name:- "<<c_name;
				cout<<"\n Car Price:- "<<c_price;
				cout<<"\n Bike Name:- "<<b_name;
				cout<<"\n Bike CC Number:- "<<b_cc;
			}
			
};
main()
{
	bike b;
	b.accept();
	b.get();
	b.put();
	b.display();
}

