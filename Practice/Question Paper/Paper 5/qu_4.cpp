//4. Extend the `Shape` hierarchy from Question 3 to include a virtual function `displayDetails()`. Implement the `displayDetails()`
// function in each derived class to print information specific to the shape. Create an array of `Shape` pointers, pointing to 
// objects of different shapes. Demonstrate polymorphism by calling the `displayDetails()` function for each object.

#include<iostream>
using namespace std;

class Shape
{
	protected :
		int area;
		string color;
	
	public :
		virtual void displayDetails() = 0;
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
		void displayDetails()
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
		void displayDetails()
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
	Shape *s1[2];
	
	Circle c1;
	Rectangle r1;
	
	s1[0] = &c1;
	s1[1] = &r1;
		
	s1[0]->displayDetails();
	s1[1]->displayDetails();
	
	return 0;
}
