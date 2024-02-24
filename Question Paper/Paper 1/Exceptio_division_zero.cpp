//6. Define a class `Calculator` with a method that performs division. Implement exception handling to handle the case of division by zero. 
//Create an object of the `Calculator` class and demonstrate exception handling for division by zero.

#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	string error = "Can not Dived By Zero";
	
	public :
		void Divied()
		{
			cout << "Enter the value of a : ";
			cin >> a;
			
			cout << "Enter the value of b : ";
			cin >> b;
			
			if(b == 0)
			{
				throw error;	
			}	
			else
			{
				throw a/b;
			}
		}		
		
};

int main()
{
	Calculator c1;
	
	try
	{
		c1.Divied();
	}
	catch(string e)
	{
		cout << endl << e;
	}
	catch(int ans)
	{
		cout << endl << "Division is : "<< ans;
	}
		
	return 0;
}

