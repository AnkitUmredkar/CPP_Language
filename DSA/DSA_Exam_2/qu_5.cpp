//Write a Program to find the largest element from a dynamic RxC 2D array. Use only while loop in a whole program.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
//
//Output:
//The largest element is: 9

#include<iostream>
using namespace std;

int main()
{
	int r,c,i=0,j=0,max;
	
	start:
	cout << "Enter the number of rows : ";
	cin >> r;
	
	cout << "Enter the number of cols : ";
	cin >> c;
	
	int arr[r][c];
	
	cout << endl << "Enter the elements of an array : " << endl;
	
	while(i<r)
	{
		j = 0;
		while(j<c)
		{
			cout << "Enter a arr[" << i << "][" << j << "] : ";
			cin >> arr[i][j];
			j++;
		}
		i++;
	}
	
	cout << endl << "The Array is Below " << endl;
	
	i=0;
	while(i<r)
	{
		j = 0;
		while(j<c)
		{
			cout << arr[i][j] << " ";
			j++;
		}
		i++;
		cout << endl;
	}
	
	max = arr[0][0];
	
	i=0;
	while(i<r)
	{
		j = 0;
		while(j<c)
		{
			if(max < arr[i][j])
			{
				max = arr[i][j];
			}
			j++;
		}
		i++;
	}
	
	cout << endl << "The Largest element in array is : " << max;
	
	return 0;
}
