//Write a Program to Swap two character variables using the third variable without using any function.
//Also validate that
//- if a user enter any one of the character that is greater than 'M', then display a message "Enter a character less than 'M' "

#include<iostream>
using namespace std;

int main()
{
	char a,b,c;
	
	cout << "Enter the first character : " ;
	cin >> a;
	
	cout << "Enter the second character : " ;
	cin >> b;
	
	if(a >= 'M' && a >= 'm' || b >= 'M' && b >= 'm')
	{
		cout << endl << "Enter a character less than 'M' or 'm' ";
	}
	else
	{
		cout << endl << endl <<"The values Before Swapping :";
		cout << endl << "The value of a : " << a;
		cout << endl << "The value of b : " << b;
		
		c = a;
		a = b;
		b = c;
		
		cout << endl << endl <<"The values After Swapping :";
		cout << endl << "The value of a : " << a;
		cout << endl << "The value of b : " << b;
	}
	
	
	return 0;
}
