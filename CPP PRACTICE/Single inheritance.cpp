#include<iostream>
using namespace std;
class company
{
	protected:
		string name,address;
	public:
		void accept()
		{
			cout<<"\n Enter the name of Company:- ";
			cin>>name;
			cout<<"\n Enter the Address of Company:- ";
			cin>>address;
		}
};
class product:public company
{
	private:
		int pid;
		string pname;
		float pprice;
	public:
		void get()
		{
			cout<<"\n Enter the Product id:- ";
			cin>>pid;
			cout<<"\n Enter the Product Name:- ";
			cin>>pname;
			cout<<"\n Enter the Product PriceL- ";
			cin>>pprice;
		}
		void display()
		{
			cout<<"\n Company Name :- "<<name;
			cout<<"\n Company Address :- "<<address;
			cout<<"\n Product Name:- "<<pname;
			cout<<"\n Product ID :- "<<pid;
			cout<<"\n Product Price :- "<<pprice;
		}
};
main()
{
	product p;
	p.accept();
	p.get();
	p.display();
}
