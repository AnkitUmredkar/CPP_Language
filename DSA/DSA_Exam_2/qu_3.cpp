//Write a Program to create a dynamic 1D array of odd elements from given range. Also find the average of the generated elements.
//For example,
//Input:
//Enter starting number: 1
//Enter ending number: 20
//
//Output: 
//Array is 1 3 5 7 9 11 13 15 17 19
//Average is 10

#include<iostream>
using namespace std;

int main()
{
	int n1,n2,i,x=0,sum=0;
	
	cout << "Enter the Starting number : ";
	cin >> n1;
	
	cout << "Enter the Ending number : ";
	cin >> n2;
	
	int arr[n2];
	
	for(i=n1; i<=n2; i++)
	{
		if(i % 2 == 1)
		{
			arr[x] = i;
			x++;
		}
		
	}
	
	cout << endl << "Tha array is : ";
	for(i=0; i<x; i++)
	{
		cout << arr[i] << " ";
		sum = sum + arr[i];
	}
	
	cout << endl << "Avarage is : " << sum/x;
	
	return 0;
}
