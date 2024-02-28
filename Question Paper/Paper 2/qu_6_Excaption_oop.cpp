//6. Define a class `MathOperations` with a method that performs a division operation. Implement exception handling to handle invalid inputs. 
//Create an object of the `MathOperations` class and demonstrate exception handling for invalid inputs.

#include<iostream>
using namespace std;

class MathOperation
{
	int a,b;
	string error = "Value can't Divide by Zero";
	
	public : 
		void division()
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
	MathOperation m1;
	
	try
	{
		m1.division();
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

