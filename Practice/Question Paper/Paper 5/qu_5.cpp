//5. Define a class `Calculator` with methods that perform arithmetic operations. Implement exception handling to deal with division by zero 
//and other possible errors. Create an object of the `Calculator` class and demonstrate exception handling for various scenarios.

#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	string error = "Value Can't divide By Zero";
	
	public :
		void Division()
		{
			cout << "Enter the first Value : ";
			cin >> a;
			
			cout << "Enter the Second Value : ";
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
	
	try
	{
		c1.Division();
	}
	catch(string error)
	{
		cout << endl << error;
	}
	catch(int ans)
	{
		cout << endl << "Division is : " << ans;
	}
	
	return 0;
}

