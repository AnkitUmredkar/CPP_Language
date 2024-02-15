//1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include<iostream>
using namespace std;

class Math
{
	int a;
	
	public :
		void set()
		{
			cout << "Entre the value of a : ";
			cin >> a;
		}
		
		void get()
		{
			cout << "a : "  << a;
		}
		
		bool operator ==(Math obj2)
		{
			if(this->a == obj2.a)
			{
				return true;	
			}
			else
			{
				return false;
			} 
		}
};


int main()
{
	Math m1,m2,m3;
	
	m1.set();
	m2.set();
	
	if(m1 == m2)
	{
		cout << "Both are Same";
	}
	else
	{
		cout << "Both are not same";
	}
	
	
	return 0;
}
