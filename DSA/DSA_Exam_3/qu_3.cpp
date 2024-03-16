//Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, 
//that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.

#include<iostream>
using namespace std;

class Shape
{
	protected :
		int height,width;
	Shape()
	{
		cout << "Enter Value of Height : ";
		cin >> height;
		
		cout << "Enter Value of Width : ";
		cin >> width;
	}	
};

class Triangle : public Shape
{
	float ans;
	public :
		void area()
		{
			ans = 0.50 * height * width;
			
			cout << endl << "The Area of Triangle is : " << ans << endl << endl;
		}
};

class Rectangle : public Shape
{
	int ans;
	public :
		void area()
		{
			ans = height * width;
			
			cout << endl << "The Area of Rectangle is : " << ans;
		}
};

int main()
{
	Triangle t1;
	t1.area();
	
	Rectangle r1;
	r1.area();
	
}
