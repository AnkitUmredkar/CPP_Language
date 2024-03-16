//Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18

#include<iostream>
using namespace std;

int SumOfArrayElement(int arr[],int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	
	return sum;
}

int main()
{
	int n,i;
	
	cout << "Enter The Size of an Array : ";
	cin >> n;
	
	int arr[n];
	
	cout << endl << "Enter The Elements of an Array :" << endl;
	for(i=0; i<n; i++)
	{
		cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}
	
	cout << endl << "Sum of all Array Elements is : " << SumOfArrayElement(arr,n);
	
}
