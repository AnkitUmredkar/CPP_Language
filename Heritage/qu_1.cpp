//1 Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and
//rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, and then call the area()
//function using these two objects.

#include<iostream>
using namespace std;

class Shape
{
	protected :
		
    int Height,Width;
    float ans;
	
	Shape()
	{
		cout << endl << endl << "Enter the Height : ";
		cin >> Height;	
		
		cout << "Enter the Width : ";
		cin >> Width;
	}	
};

class Triangle : public Shape
{
	public :	
		void area()
		{
			ans = (Height * Width * 0.5);
			cout << endl << "The Area of Triangle is : " << ans;
		}
	
};


class Rectangle : public Triangle
{		
	public :	
		void area()
		{
			ans = (Height * Width);
			cout << endl << "The Area of Rectangle is : " << ans;
		}
};

int main()
{
	
	Triangle t;
	t.area();

	Rectangle r;
	r.area();
	
	
	return 0;
}

