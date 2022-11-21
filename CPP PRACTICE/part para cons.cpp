#include<iostream>
using namespace std;
class parts
{
	private:
		int part_id;
		string part_name;
		float part_price;
		
	public:
		parts(int id,string pn,float pr) //parameterized constructor
		{
			part_id = id;
		    part_name = pn;
		    part_price = pr;
		}
		void display()
		{
			cout<<"\n Part ID "<<part_id;
			cout<<"\n Part Name:- "<<part_name;
			cout<<"\n Part Price:- "<<part_price;
		}
		
		
};
main()
{
	parts p(111,"Disk",222.56);
	p.display();
	
}
