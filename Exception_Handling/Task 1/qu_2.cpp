//1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a person cannot be able to vote if his/her age is less than 18

#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout << "Enter age : ";
	cin >> age;
	
	try
	{
		if(age < 18 || age >=120)
		{
			throw age;
		}
		else
		{
			cout << endl << "You are Eligible For Votting"<< endl;
		}
	}
	catch(...)
	{
		cout << endl << "You are not Eligible For Votting" << endl;
	}
	
	return 0;
}

