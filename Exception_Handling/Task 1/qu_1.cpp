//1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter a : ";
	cin >> a;
	
	cout << "Enter b : ";
	cin >> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << endl << "Division : " << a/b << endl;
		}
	}
	catch(...)
	{
		cout << "Value can't Divide by Zero" << endl;
	}
	
	return 0;
}

