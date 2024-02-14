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
			cout << "a : " << a << endl;
		}
		
		Math operator +(Math &obj2)
		{
			int x,y;
			Math temp;
			
			if(a < obj2.a)
			{
				temp.a = obj2.a;
				cout << endl << "Second object contains Max value " << endl;
			}
			else
			{
				temp.a = a;
				cout << endl << "First object contains Max value " << endl;
			}
			
			return temp; 
		}
};


int main()
{
	Math obj1,obj2,obj3;
	
	cout << "Enter the value for First object : " << endl;
	obj1.set();
	
	cout  << endl << "Enter the value for Second object : " << endl;
	obj2.set();
	
	obj3 = obj1 + obj2;
	
	obj3.get();
	
	return 0;
}
