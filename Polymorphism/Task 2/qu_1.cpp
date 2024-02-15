//1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include<iostream>
using namespace std;

class Math
{
	int a;
	bool b;
	
	public :
		void set()
		{
			cout << "Entre the value of a : ";
			cin >> a;
		}
		
		bool operator <(Math obj2)
		{
			if(this->a < obj2.a)
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
	Math obj1,obj2,obj3;
	
	obj1.set();
	obj2.set();
	
	if(obj1 < obj2)
	{
		cout << endl << "Object 2 is Maximum";
	}
	else
	{
		cout << endl << "Object 1 is Maximum";
	}
	
	return 0;
}
