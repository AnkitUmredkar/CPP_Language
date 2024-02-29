#include<iostream>
using namespace std;

class Rectangle
{
	private :
		int length,width;
	public :
		void set()
		{
			cout << "Enter the length of rectangle : ";
			cin >> length;
			
			cout << "Enter the width of rectangle : ";
			cin >> width;
		}
		void area()
		{
			int ans = length * width;
			get(ans);
		}
		void get(int ans)
		{
			cout << endl << "The Area of Rectangle is : " << ans;
		}
};

int main()
{
	Rectangle r1;
	r1.set();
	r1.area();
}

