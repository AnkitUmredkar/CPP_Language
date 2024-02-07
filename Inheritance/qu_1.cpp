/*1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods*/

#include<iostream>
using namespace std;

class X
{
	protected :
		int a,b,c;
};

class Y : public X
{ 
	public :
		void setData()
		{
			cout << "Enter the value of a : ";
			cin >> a;	
			
			cout << "Enter the value of b : ";
			cin >> b;
			
			cout << "Enter the value of c : ";
			cin >> c;
			
		}
		void getData()
		{
			cout << endl << "The Sum of all number's Cube is : " << (a * a * a) + (b * b * b) + (c * c * c) << endl;
		}
};

int main()
{
	Y obj;
	obj.setData();
	obj.getData();
	
	return 0;
}
