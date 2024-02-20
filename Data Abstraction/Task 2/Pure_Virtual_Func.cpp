//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;

class Shape
{
	protected :
		float area,radius,base,height,length,width;
		static float pi;
	public :
		virtual void calculate() = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
};

float Shape :: pi = 3.14;

class Circle : public Shape
{
	public :
		void calculate()
		{
			cout << "Enter the radius : ";
			cin >> radius;
			
			area = (pi * (radius*radius));
			
			cout << "Area of Circle is : " << area;
		}
};

class Triangle : public Shape
{
	public :
		void calculate()
		{
			cout << endl << endl << "Enter Base of Triangle : ";
			cin >> base;
			
			cout << "Enter Height of Triangle : ";
			cin >> height;
			
			area = ((base * height)/2);
			
			cout << "Area of Circle is : " << area;
		}
};

class Rectangle : public Shape
{
	public :
		void calculate()
		{
			cout << endl << endl << "Enter Length of Rectangle : ";
			cin >> length;
			
			cout << "Enter Width of Rectangle : ";
			cin >> width;
			
			area = (length * width);
			
			cout << "Area of Rectangle is : " << area;
		}
};

int main()
{
	Circle c1;
	c1.calculate();
	
	Triangle t1;
	t1.calculate();
	
	Rectangle r1;
	r1.calculate();
	
	return 0;
}
