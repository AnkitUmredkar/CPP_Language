//3. Define a base class `Shape` with private attributes `color` and `area`. Implement public methods for setting and getting these attributes. 
//Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area specific to each shape. 
//Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.

#include<iostream>
using namespace std;

class Shape
{
	protected :
		int area;
		string color;
	
		virtual void calculation() = 0;
		void set()
		{
			cout << "Enter the color : ";
			cin >> color;	
			
		}
		
		void get(int area)
		{
			cout << area << endl << endl;	
		}		
};

class Circle : public Shape
{
	int r,area;
	const int pi = 3.14;
	
	public :
		void calculation()
		{
			set();
			
			cout << "Enter the radius of Circle : ";
			cin >> r;
			
			area = (3.14 * (r*r));
			
			cout << endl << "Circle color : " << color << endl;
			cout << "Circle Area  : ";
			get(area);
		}
												
};

class Rectangle : public Shape
{
	int l,w,area;
	
	public :
		void calculation()
		{
			set();
			
			cout << "Enter the length of Rectangle : ";
			cin >> l;
			
			cout << "Enter the Width of Rectangle : ";
			cin >> w;
			
			area = l * w;
			
			cout << endl << "Rectangle color : " << color << endl;
			cout << "Rectangle Area  : ";
			get(area);
		}
};

int main()
{
	Circle c1;
	c1.calculation();
	
	Rectangle r1;
	r1.calculation();
	
	return 0;
}
