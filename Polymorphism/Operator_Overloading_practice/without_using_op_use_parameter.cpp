#include<iostream>
using namespace std;

class A
{
	int n;
	public :
		void set()
		{
			cout << "Enter the value of n : ";
			cin >> n;	
		}
		void get()
		{
			cout << "n : " << n;	
		}	
		void sum(A &a1,A &a2)
		{
			n = a1.n + a2.n;
		}
};

int main()
{
	A a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3.sum(a1,a2);
	
	a3.get();
	
	return 0;
}


