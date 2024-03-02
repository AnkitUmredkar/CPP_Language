//Write a Program to create a menu-driven program for create a Calculator's functionality.

#include<iostream>
using namespace std;

int main()
{
	int sum,a,b,op;
	
	cout << "Enter the First value : " ;
	cin >> a;
	
	cout << "Enter the Second value : " ;
	cin >> b;
	
	cout << endl << "Press 1 for + : ";
	cout << endl << "Press 2 for - : ";
	cout << endl << "Press 3 for * : ";
	cout << endl << "Press 4 for / : ";
	cout << endl << "Press 5 for % : ";
	
	cout << endl << endl << "Enter the Operator which you want : ";
	cin >> op;
	
	if(op == 1)
	{
		cout << endl << a << " + " << b << " = " << a + b;
	}
	else if(op == 2)
	{
		cout << endl << a << " - " << b << " = " << a - b;
	}
	else if(op == 3)
	{
		cout << endl << a << " * " << b << " = " << a * b;
	}
	else if(op == 4)
	{
		cout << endl << a << " / " << b << " = " << a / b;
	}
	else if(op == 5)
	{
		sum = a % b;
		cout << endl << a << " % " << b << " = " << sum;
	}
	
	return 0;
}
