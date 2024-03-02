//Write a Program to find the transpose matrix of a given NxN 2D array. The 2D array must be a dynamic array and a square matrix same time. If the array is not a square matrix, then display a proper validation message.
//For example,
//Input:
//4 7 3
//5 6 9
//2 1 8
//
//Output: 
//4 5 2
//7 6 1
//3 9 8

#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	
	start:
	cout << "Enter the number of rows : ";
	cin >> r;
	
	cout << "Enter the number of cols : ";
	cin >> c;
	
	if(r != c)
	{
		cout << endl << "For Transpose of matrix Must be same the number of cols and rows!!" << endl;
		goto start;
	}
	
	int arr[r][c];
	
	cout << endl << "Enter the elements of an array : " << endl;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout << "Enter a arr[" << i << "][" << j << "] : ";
			cin >> arr[i][j];
		}
	}
	
	cout << endl << "The Array is Below " << endl;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "The Transpose Array is Below " << endl;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
