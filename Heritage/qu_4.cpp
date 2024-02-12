//4 WAP to solve ambiguity error.

#include<iostream>
using namespace std;

class A
{
	protected :
		int a;
		
		void set()
		{
			cout << "Enter the First Value : ";
			cin >> a;
		}
};

class B
{
	protected :
		int a;
		
		void set()
		{
			cout << "Enter the Second Value : ";
			cin >> a;
		}
};

class C : public A,public B
{
	int sum;
		
	public :
		void get()
		{
			A :: set();
			B :: set();
			
			sum = A::a + B::a;
			cout << endl << "After solving ambiguity error \nSum is : " << sum;
		}
};

int main()
{
	C obj;
	obj.get();
	return 0;
}

