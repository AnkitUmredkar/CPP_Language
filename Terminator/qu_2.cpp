//Q.2 Write a Program to throw 0 if the age of the user is less than 18,otherwise print that you are 
//eligible to vote. Also,handle that thrown exception and print you are not eligible to vote.

#include<iostream>
using namespace std;

class Age
{
	int age;
	
	public :
		void vote()
		{
			cout << "Enter the age : ";
			cin >> age;
			
			if(age < 18)
			{
				throw 0;	
			}
			else
			{
				cout << endl << "You Are Eligible for Votting";	
			}	
		}	
};

int main()
{
	Age a1;
	
	try
	{
		a1.vote();
	}
	catch(int a)
	{
		cout << endl << "You Are Not Eligible for Votting !!";	
	}
	
	
	return 0;
}

