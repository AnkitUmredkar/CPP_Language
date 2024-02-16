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
			cout << endl << "n : " << n;	
		}	
		A sum(A &a2)
		{
			A temp;
			temp.n = n + a2.n;
			return temp;
		}
};

int main()
{
	A a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3 = a1.sum(a2);
	
	a3.get();
	
	return 0;
}
