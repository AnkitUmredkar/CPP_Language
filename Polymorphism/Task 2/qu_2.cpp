//'++' Arithemetic Operator Overloading

#include<iostream>
using namespace std;

class Math
{
	int a,b;
	public :
		void set()
		{
			cout << "Entre the value of a : ";
			cin >> a;
			
			cout << "Entre the value of b : ";
			cin >> b;
		}
		
		void get()
		{
			cout << endl << "a : " << a << endl;
			cout << "b : " << b;
		}
		
		Math& operator ++()
		{
			Math temp;
			temp.a = a++;
			temp.b = b++;
			
			return temp;
		}

};


int main()
{
	Math obj;
	obj.set();
	++obj;
	obj.get();
	
	return 0;
}
