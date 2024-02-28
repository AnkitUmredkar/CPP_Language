//7. Define an abstract class `Shape` with pure virtual functions `calculateArea()` and `draw()`. Implement concrete/normal classes 
//`Circle` and `Rectangle` that inherit from `Shape`. Demonstrate polymorphism by creating an array of `Shape` pointers pointing to 
//objects of both `Circle` and `Rectangle`. Call the `calculateArea()` and `draw()` functions for each object.

#include<iostream>
using namespace std;

class Shape
{
	public :
		
		virtual void area()	= 0;
		virtual void draw()	= 0;
};

class Circle : public Shape
{
	int r,p = 3.14;
	float ans;
	string color;
	
	public :
		
		void draw()
		{
			cout << "Enter the color of Circle : ";
			cin >> color;
		}
		
		void area()
		{
			cout << "Enter a Radius of Circle : ";
			cin >> r;
			
			ans = (3.14 * (r*r));
			
			cout << endl << "Area of Circle is : " << ans;
			cout << endl << "Color of Circle is : " << color << endl << endl;
		}
};

class Rectangle : public Shape
{
	int l,w,ans;
	string color;
	
	public :
		
		void draw()
		{
			cout << "Enter the color of Rectangle : ";
			cin >> color;
		}
		
		void area()
		{
			cout << "Enter a Length of Rectangle : ";
			cin >> l;
			
			cout << "Enter a Width of Rectangle : ";
			cin >> w;
			
			ans = l*w;
			
			cout << endl << "Area of Rectangle is : " << ans;
			cout << endl << "Color of Rectangle is : " << color;
		}
};

int main()
{
	Shape *s[2];
	Circle c1;
	Rectangle r1;
	
	s[0] = &c1;
	s[1] = &r1;
	
	s[0]->draw();
	s[0]->area();
	
	s[1]->draw();
	s[1]->area();

	return 0;
}

