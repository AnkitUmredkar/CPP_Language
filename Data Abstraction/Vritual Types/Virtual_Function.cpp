//Demonstrate of Virtual Function

#include<iostream>
using namespace std;

class A
{
	public :
		virtual void print()
		{
			cout << "Class A" << endl;	
		}	
};
class B : public A
{
	public :
		void print()
		{
			cout << "Class B";	
		}
};

int main()
{
	A a1;
	B b1;
	
	A *ptr = &b1;
	ptr -> print();
	
	return 0;
}
