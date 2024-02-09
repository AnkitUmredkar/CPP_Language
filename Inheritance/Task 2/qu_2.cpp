//Q.2 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.

#include<iostream>
using namespace std;

class A
{
	protected : 
		int a;
		
		void set1()
		{
			cout << "Enter the first value : ";
			cin	>> a;
		}
};

class B
{
	protected : 
		int a;
	
		void set2()
		{
			cout << "Enter the Second value : ";
			cin	>> a;
		}
};

class C : public A,public B
{
	private :
		int x;
		
	public :
		void get()
		{
			A::set1();
			B::set2();
			
			cout << "\nEnter the number which you want to print Enter (1 or 2) : ";
			cin >> x;
			 
			if(x == 1)
			{
			 	cout << "\na : " << A::a;
			}
			else
			{
				cout << "\na : " << B::a;
			}
		}
};

int main()
{
	C c1;
	
	c1.get();
	
	return 0;
}
