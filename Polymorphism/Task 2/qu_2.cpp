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
			int s1,s2;
			Math temp1;
			
			s1 = a++;
			s2 = b++;	
			
			temp1.a = s1;
			temp1.b = s2;
			
			return temp1;
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
