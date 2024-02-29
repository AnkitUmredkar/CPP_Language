#include<iostream>
using namespace std;

class Calculator
{
	public :
		float a;
		int b;
	
		void division()
		{
			cout << "Enter the first Value : ";
			cin >> a;
			
			cout << "Enter the Second Value : ";
			cin >> b;
			
			if(b == 0)
			{
				throw b;
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
		c1.division();
	}
	catch(int b)
	{
		cout << endl << "Value Can't Divide by " << b;
	}
	catch(float ans)
	{
		cout << endl << "Answer is : " << ans;
	}
	
	return 0;
}

