//Write a Program to find the sum of all digits of a given number. Only use for loop to solve a problem.
//For example,
//Input:
//Enter any number: 673
//
//Output: 
//Sum is 16

#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,r;
	
	cout << "Enter any Number : ";
	cin >> n;
	
	for(; n>0;)
	{
		r = n % 10;
		sum = sum + r;
		n = n / 10;
	}
	
	cout << endl << "Sum of All Digit is : " << sum;
	
	return 0;
}
