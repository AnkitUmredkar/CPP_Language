//1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include<iostream>
using namespace std;

class Math
{
	int a,b;
	public :
		void set()
		{
			cout << "Entre the value of a : ";
			cin >> a;
			
			cout << "Entre the value of b : ";
			cin >> b;
		}
		
		void get()
		{
			cout << "a : " << a << endl;
			cout << "b : " << b;
		}
		
		Math operator +(Math &obj2)
		{
			int x,y;
			Math temp;
			
			x = a - obj2.a;
			y = b - obj2.b;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};


int main()
{
	Math obj1,obj2,obj3;
	
	obj1.set();
	obj2.set();
	
	obj3 = obj1 + obj2;
	
	obj3.get();
	
	return 0;
}
