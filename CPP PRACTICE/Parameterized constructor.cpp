#include<iostream>
using namespace std;
class student
{
	private: 
	int rollno;
	string name;
	float marks;
	
	public:
		student(int r,string n,float m) //Parameterized constructor
		{
			rollno=r;
			name=n;
			marks=m;
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
	student s2(1,"Aditya",99.99); //Calling a parameterized cont=structor
	s2.display();
}
