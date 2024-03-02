//Write a Program to find the minimum number from the given 3 numbers using nested if else. 
//Also validate that 
//- if all numbers are same, then no minimum value can be displayed.
//- if any two numbers are same, then display appropriate message.

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter the first value of a : " ;
	cin >> a;
	
	cout << "Enter the second value of b : " ;
	cin >> b;
	
	cout << "Enter the third value of c : " ;
	cin >> c;//2 1 2
	
	if(a!=b || b!=c)
	{
		if(a!=b && a!=c && b!=c)
		{
			if(a < b)
			{
				if(a < c)
				{
					cout << "a is minimum";
				}
				else
				{
					cout << "c is minimum";
				}
			}
			else
			{
				if(b < c)
				{
					cout << "b is minimum";
				}
				else
				{
					cout << "c is minimum";
				}
			}
		}
		else
		{
			cout << endl << "Any of Two value does not must be same!!";
		}
	}
	else
	{
		cout << endl << "All value does not must be same!!";
	}
	
	return 0;
}
