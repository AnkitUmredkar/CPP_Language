#include<iostream>
using namespace std;

class Shape
{
	protected :
		string color;
		float area;
		
	public :
		virtual void calculation() = 0;
		virtual void display() = 0;
		
		void set()
		{
			cout << "Enter the color : ";
			getline(cin,color);
			
		}
		float get(float area)
		{
			return area;
		}	
};

class Circle : public Shape
{
	int r;
	const float p=3.14;
	
	public :
		void calculation()
		{
			set();
			cout <<	"Enter the radius of Circle : ";
			cin >> r;
			cin.ignore();
			
			area = (p * (r*r));
			
			cout << endl << ">------Circle------<" << endl;
			get(area);
		}
		void display()
		{
			cout << "Color is : " << color << endl;
			cout << "Area is  : " << get(area) << endl << endl;
		}	
};

class Rectangle : public Shape
{
	int l,w;
	
	public :
		void calculation()
		{
			set();
			cout <<	"Enter the length of Rectangle : ";
			cin >> l;
			
			cout <<	"Enter the width of Rectangle : ";
			cin >> w;
			
			area = l * w;
			
			cout << endl << ">------Rectangle------<" << endl;
			get(area);
		}
		void display()
		{
			cout << "Color is : " << color << endl;
			cout << "Area is  : " << get(area) << endl << endl;
		}
};


int main()
{
	Shape *s1[2];
	Circle c1;
	Rectangle r1;
	
	s1[0] = &c1;
	s1[1] = &r1;
	
	c1.calculation();
	s1[0]->display();
	
	r1.calculation();
	s1[1]->display();
	
	
}
