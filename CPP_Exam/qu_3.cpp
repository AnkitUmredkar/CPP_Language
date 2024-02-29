#include<iostream>
using namespace std;

class Shape
{
	protected :
		string color;
		float area;
		
	public :
		virtual void calculation() = 0;
		void set()
		{
			cout << "Enter the color : ";
			getline(cin,color);
			
		}
		void get(float area)
		{
			cout << "Color is : " << color << endl;
			cout << "Area is  : " << area << endl << endl;
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
};


int main()
{
	Circle c1;
	c1.calculation();
	
	Rectangle r1;
	r1.calculation();
}

