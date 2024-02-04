//Write a C++ program to reverse a string using recursion.

#include<iostream>
#include<string.h>
using namespace std;


class Fibonacci
{
	int sum;
	static int i;
	public : 
	void revstr(string n)
	{
		if(n > '\0')
		{
			cout << n;
		}
	}
};

int main()
{
	string n;
	int len;
	
	Fibonacci a;
	
	cout << "Enter the name : ";
	gets(n);
	
	len = strlen(n);
	
	a.revstr(n);
	
	return 0;
}
