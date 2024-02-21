//1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char password[50];
	int i,len,check=0;
	
	cout << "Enter Password : ";
	cin >> password;
	
	len=strlen(password);
	
	for(i=0; i<=len; i++)
		{
			if(password[i] >= 'A' && password[i] <= 'Z')
			{
				
				check = 1;
			}
			
		}
	
	try
	{
		if(check == 0)
		{
			throw password;
		}
		else
		{
			cout << endl << "PassWord is Valid.";
		}
	}
	catch(...)
	{
		cout << endl << "PassWord is not Valid!!" << endl;
	}
	
	return 0;
}

