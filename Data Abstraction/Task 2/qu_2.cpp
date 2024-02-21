//1
//2 9
//3 8 10
//4 7 11 14
//5 6 12 13 15

/*
1 2 3 4 5
9 8 7 6
10 11 12
14 13
15
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,x=1,a[50];
	
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			if(j % 2 == 0)
			{
				cout << x << " ";
				x++;	
			}
		}
		for(j=1; j<=i; j++)
		{
			if(j % 2 == 1)
			{
				cout << x << " ";
				x++;	
			}
			
		}
		cout << endl;
		
	}
	
	return 0;
}


