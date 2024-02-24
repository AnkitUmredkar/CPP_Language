//2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

#include<iostream>
using namespace std;

int main()
{
	int f,l,total,year,i,x=0;
	
	cout << "Enter the first year : ";
	cin >> f;
	
	cout << "Enter the last year : ";
	cin >> l;
	
	total = l - f;
	year = (total / 4) + 1;
	
	int a[year];
	
	for(i=f; i<=l; i++)
	{
		if(i % 4 == 0)
		{
			a[x] = i;
			x++;
		}
	}
	
	cout << endl << "The Array of leap year is : ";
	
	for(i=0; i<x; i++)
	{
		cout << a[i]<< ",";
	}

	
 	return 0;
}
