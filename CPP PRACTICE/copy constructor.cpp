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
		student(int r,string n,float m)
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
		student(student &obj) //Copy constructor
		{
			rollno=obj.rollno;
			name=obj.name;
			marks=obj.marks;
		}
//		void display()
//		{
//			cout<<"\n Roll No:- "<<rollno;
//			cout<<"\n Name:- "<<name;
//			cout<<"\n Percentage:- "<<marks;
//		}
};
main()
{
	student s1;
	s1.display();
	student s2(3,"bhavna",67.78);
	s2.display();
	student s3(s2); //calling of copy constructor
	s3.display();
}








