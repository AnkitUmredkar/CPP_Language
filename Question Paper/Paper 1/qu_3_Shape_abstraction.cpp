#include<iostream>
using namespace std;

class Shape
{
	protected :
		string color;
		int area;
		virtual void calculate() = 0;
		
	public :
		void set()
		{
			cout << "Enter the color : ";
			cin >> color;
		}
		void get(int area)
		{
			cout << area << endl << endl << endl;
		}
};

class Circle : public Shape
{
	int r;
	public :
		void calculate()
		{
			set();
			cout << "Enter the radius of Circle : ";
			cin >> r;
			
			area = (3.14 * (r*r));
			
			cout << endl << "Circle's Color : " << color << endl;
			cout << "Circle's Area  : " ;
			get(area);
		}
	
};

class Rectangle : public Shape
{
	int l,w;
	public :
		void calculate()
		{
			set();
			cout << "Enter length of Rectangle:";
			cin >> l;
			
			cout << "Enter Width of Rectangle :";
			cin >> w;
			
			area = l * w;
	
			cout << endl << "Rectangle's Color : " << color << endl;
			cout << "Rectangle's Area  : ";
			get(area);
		}
};

int main()
{	
	Circle c1;
	c1.calculate();
	
	Rectangle r1;
	r1.calculate();
	
	return 0;
}

