//Q.1 Write a Program to create a class that illustrates the concept of handling 
//all types of exceptions using general exceptions.

#include<iostream>
using namespace std;

class TryCatchEx
{
	int age;
	float a,b;
	string password;
	
	public :
		void checkage()
		{
			cout << "--------Check Age--------" << endl;
			cout << "Enter the age : ";
			cin >> age;
			
			try
			{
				if(age < 18)
				{
					throw 0;	
				}
				else
				{
					cout << endl << "You Are Eligible for Votting";	
				}	
			}
			catch(int age)
			{
				cout << endl << "You Are Not Eligible for Votting !!";	
			}	
		}	
		void checkdivision()
		{
			cout << endl << endl << "--------Check Division--------" << endl;
			cout << "Enter the first value : ";
			cin >> a;
			
			cout << "Enter the Second value : ";
			cin >> b;
			
			try
			{
				if(b == 0)
				{
					throw b;	
				}
				else
				{
					cout << endl << "Division is : " << a/b;
				}	
			}
			catch(float b)
			{
				cout << endl << "Value Can't divide by " << b;	
			}
			
		}
		void checkpassword()
		{
			int check=0;
			cout << endl << endl << "--------Check Password--------" << endl;
			cout << "Enter the Password : ";
			cin >> password;
			
			for(int i=0; i<password.length(); i++)
			{
				if(password[i] >= 'A' && password[i] <= 'Z')
				{
					check = 1;
					break;
				}
			}
			
			try
			{
				if(check == 1)
				{
					cout << endl <<  "Password is Valid" << endl;	
				}
				else
				{
					throw password;	
				}
			}
			catch(string password)
			{
				cout << endl << password << " This Password is wrong because Atleast one capital Compalsary !!";	
			}	
		}
};

int main()
{
	TryCatchEx t1;
	
	t1.checkage();
	t1.checkdivision();
	t1.checkpassword();
	
	
	
	
	
	return 0;
}


