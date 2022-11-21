#include<iostream>
using namespace std;
class Employee
{
	public:
		int id; //data members (Also Instance Variable)
		string name;
		float salary;
		
		Employee(int e_id,string e_name,float e_salary)
		{
			this->id = e_id;
			this->name = e_name;
			this->salary = e_salary;
		}
		void display()
		{
			cout<<id<<"  "<<name<<"  "<<salary<<endl;
		}
};
main()
{
	Employee e1 = Employee(101,"Aditya",98500);
	Employee e2 = Employee(102,"Cherry",98600);
	e1.display();
	e2.display();
}
