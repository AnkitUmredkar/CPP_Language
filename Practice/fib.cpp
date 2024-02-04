//Write a C++ program to implement a recursive function to get the nth Fibonacci number.

#include<iostream>
using namespace std;


class Fibonacci
{
	int sum;
	static int f,s;
	public : 
	void fib(int n)
	{
		int sum;
		
		if(0 < n)
		{
			cout << " " << f;
			sum = f+s;
			f=s;
			s=sum;
			n--;
		}
		
		fib(n);
	}
};

int Fibonacci::f=0;
int Fibonacci::s=1;

int main()
{
	int n;
	
	Fibonacci a;
	
	cout << "Enter the size of serise : ";
	cin >> n;
	
	a.fib(n);
	
	return 0;
}
