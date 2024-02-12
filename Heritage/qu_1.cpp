//2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include<iostream>
using namespace std;

class Base
{
	protected :
		int	n,ans;
	public :
		void set()
		{
			cout << endl << endl << "Enter the number which you want : ";
			cin >> n;
		}
};

class Square : public Base
{
	public :
		void square()
		{
			set();
			cout << "The Square of entered number is : " << n * n;
		}
};

class Cube : public Base
{
	public :
		void cube()
		{
			set();
			cout << "The Cube of entered number is : " << n * n * n;
		}
};

int main()
{
	
	Square obj_1;
	obj_1.square();
	
	Cube obj_2;
	obj_2.cube();
	
	return 0;
}
