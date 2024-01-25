//1 Write a Program to find all even elements from a given 1D array.

#include<iostream>
using namespace std;

main()
{
	int n,i;
	
	cout << "Enter the size of an array : ";
	cin >> n;
	
	int a[n];
	
	cout << endl << "Enter the elemnets of an array : " << endl;
	
	for(i=0; i<n; i++)
	{
		cout << "Enter the a["<< i <<"] : ";
		cin >> a[i];
	}
	
	cout << endl << "The Array is : ";
	
	for(i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	
	cout << endl << "The even number of an array is : ";
	
	for(i=0; i<n; i++)
	{
		if(a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	
}
