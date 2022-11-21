#include<iostream>
using namespace std;
class Hello
{
	public:
		Hello()
		{
			cout<<"\n It is constructor";
		}
		~Hello()
		{
			cout<<"\n It is destructor";
		}
		void display()
		{
			cout<<"\n It is display function";
		}
};
main()
{
	Hello h1;
	h1.display();
	Hello h2,h3;
}
