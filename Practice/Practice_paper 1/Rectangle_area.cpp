//Define a class named Rectangle with private attributes length and width. Implement public member functions to set and get the values of these attributes. Include a method
// to calculate the area of the rectangle. Create an object of the Rectangle class and demonstrate the functionality of the implemented methods.

#include<iostream>
using namespace std;

class Rectangle
{
	int length,width;
	public :
		void set()
		{
			cout << "Enter the length: ";
			cin >> length;	
			
			cout << "Enter the width: ";
			cin >> width;	
		}
		void get()
		{
			cout << endl << "length : " << length;
			cout << endl << "Width  : "	<< width << endl;
		}	
		void Area()
		{
			cout << endl << "Area of Rectangle is : " << length * width;
		}
};

int main()
{
	Rectangle r1;
	r1.set();
	r1.get();
	r1.Area();
	
	return 0;
}
