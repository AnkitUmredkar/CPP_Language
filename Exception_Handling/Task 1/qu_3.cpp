//1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string password;
	int i,len;
	bool check = false; 
	
	cout << "Enter Password : ";
	getline(cin, password);
	
	for(i=0; i<=password.length(); i++)
		{
			if(password[i] >= 'A' && password[i] <= 'Z')
			{
				check = true;
				break;
			}
			
		}
	
	try
	{
		if(check == true)
		{
			cout << endl << "PassWord is Valid.";
		}
		else
		{
			throw password;
		}
	}
	catch(...)
	{
		cout << endl << "Invalid! password must contain at least one uppercase letter!!" << endl;
	}
	
	return 0;
}
