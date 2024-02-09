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
			
			cout << endl << "If you want to print first value then press : 1\nIf you want to print second value then press : 2 " << endl;
			cin >> x;
			 
			if(x == 1)
			{
			 	cout << endl << "a : " << A::a;
			}
			else
			{
				cout << endl << "a : " << B::a;
			}
		}
};

int main()
{
	C c1;
	
	c1.get();
	
	return 0;
}
