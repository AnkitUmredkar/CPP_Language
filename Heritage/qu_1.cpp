//2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include<iostream>
using namespace std;

class Base
{
	protected :
		int	n;
	public :
		void set()
		{
			cout << endl << "Enter the number which you want : ";
			cin >> n;
		}
};

class Square : public Base
{
	public :
		void square()
		{
			cout << endl << "The Square of entered number is : " << (n * n);
		}
};

class Cube : public Base
{
	public :
		void cube()
		{
			cout << endl << "The Cube of entered number is : " << (n * n * n);
		}
};

int main()
{
	Base obj;
	obj.set();
	
	Square obj_1;
	obj_1.square();
	
	Cube obj_2;
	obj_2.cube();
	
	return 0;
}
