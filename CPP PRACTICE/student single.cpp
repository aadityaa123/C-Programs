#include<iostream>
using namespace std;
class student
{
	protected:
		string name,roll_no;
	public:
		void accept()
		{
			cout<<"\n Enter the name of Student:- ";
			cin>>name;
			cout<<"\n Enter the Roll No of Student:- ";
			cin>>roll_no;
		}
};
class subject:public student
{
	private:
		
		string sub_name;
		int sub_code;
		float marks;
	public:
		void get()
		{
			cout<<"\n Enter the Subject Code:- ";
			cin>>sub_code;
			cout<<"\n Enter the Subject Name:- ";
			cin>>sub_name;
			cout<<"\n Enter the Marks:- ";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n Student Name :- "<<name;
			cout<<"\n Student Roll No :- "<<roll_no;
			cout<<"\n Subject Code:- "<<sub_code;
			cout<<"\n Subject Name :- "<<sub_name;
			cout<<"\n Subject Marks :- "<<marks;
		}
};
main()
{
	subject s;
	s.accept();
	s.get();
	s.display();
}
