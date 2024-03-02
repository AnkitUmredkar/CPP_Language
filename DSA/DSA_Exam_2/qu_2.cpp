//Write a Program to print a given pattern using nested while loop only.
//@ @ @ @ @ @ @ @ @ @
//% % % % % % % % %
//@ @ @ @ @ @ @ @
//% % % % % % %
//@ @ @ @ @ @
//% % % % %
//@ @ @ @
//%  % %
//@ @
//%

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	i=1;
	while(i<=10)
	{
		j=10;
		while(j>=i)
		{
			if(i % 2 == 0)
			{
				cout << "% ";
			}
			else
			{
				cout << "@ ";
			}
			j--;
		}
		i++;
		cout << endl;
	}
	return 0;
}
