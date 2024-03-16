//Write a Program to find cubes of all elements from a given 2D array of NxN using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//9  4
//25 64

#include<iostream>
using namespace std;

void cube(int *ptr,int rows,int cols)
{
	int i,j,ans; 

	cout << endl << endl << "The cube of an array is below" << endl;
	
	for(i=0; i<rows; i++)
 	{
 		for(j=0; j<cols; j++)
		{
			cout << ((*ptr) * (*ptr) * (*ptr)) << " ";
			ptr++;	
		}
		cout << endl;	
	}
}

int main()
{
 	int rows,cols,i,j,n;
 	
	cout << "Enter the size : ";
	cin >> n;
	
	rows = n;
	cols = n;
 	
 	int a[rows][cols];
 	
 	cout << endl << "Enter the elements of an array " << endl;
 	
 	for(i=0; i<rows; i++)
 	{
 		for(j=0; j<cols; j++)
		{
			cout << "Enter the arr[" << i << "][" << j << "] : " ;
			cin >> a[i][j];	
		}	
	}
	
	cout << endl << endl << "The array is below: " << endl;
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cube(&a[0][0],rows,cols);
 	
 	return 0;
}
