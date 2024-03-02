//Write a Program to check whether a number is even or odd using the ternary operator.
//Also validate that 
//- if user enter a number that is less than 0 will not be checked for even or odd, instead display a message that "Enter 0 or greater number".

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the value of n : " ;
	cin >> n;
	
	(n < 0)? cout << endl << "Enter 0 or greater number" : (n % 2 == 0)? cout << endl << "Entered number is even" : cout << "Entered number is odd";
	
	return 0;
}
