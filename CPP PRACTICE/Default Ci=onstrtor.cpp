#include<iostream>
using namespace std;
class student
{
	private: 
	int rollno;
	string name;
	float marks;
	
	public:
		student() //default constructor
		{
			rollno=1;
			name="Aditya";
			marks=99.99;
		}
		void display()
		{
			cout<<"\n Roll No:- "<<rollno;
			cout<<"\n Name:- "<<name;
			cout<<"\n Percentage:- "<<marks;
		}
};
main()
{
	student s1;
	s1.display();
}
