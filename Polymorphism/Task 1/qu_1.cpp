//1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition


#include<iostream>
using namespace std;

class A
{
	protected :
		int a,n1,n2,n3,n4,n5;
		
		calculate(int n1,int n2)
		{
			cout << endl << "Division is : " << n1 / n2;
		}
		
		calculate(int n1,int n2,int n3)
		{
			cout << endl << "Substraction is : " << n1 - n2 - n3;
		}
		
		calculate(int n1,int n2,int n3,int n4)
		{
			cout << endl << "Multiplication is : " << n1 * n2 * n3 * n4;
		}
		
		calculate(int n1,int n2,int n3,int n4,int n5)
		{
			cout << endl << "Addition is : " << n1 + n2 + n3 + n4 + n5;
		}
	
};

class B : public A
{
	public :
	 	void setter()
	 	{
	 		cout << "Enter how many Argument you wnat to pass : ";
	 		cin >> a;
	 		
	 		if(a==2)
	 		{
	 			cout << "Enter First value : ";
	 			cin >> n1;
	 			
	 			cout << "Enter Second value : ";
	 			cin >> n2;
	 			
	 			calculate(n1,n2);
			}
			else if(a==3)
			{
				cout << "Enter First value : ";
	 			cin >> n1;
	 			
	 			cout << "Enter Second value : ";
	 			cin >> n2;
				 
				cout << "Enter Third value : ";
	 			cin >> n3;
	 			
				calculate(n1,n2,n3);
			}
			else if(a==4)
			{
				cout << "Enter First value : ";
	 			cin >> n1;
	 			
	 			cout << "Enter Second value : ";
	 			cin >> n2;
				 
				cout << "Enter Third value : ";
	 			cin >> n3;
	 			
	 			cout << "Enter forth value : ";
	 			cin >> n4;
	 			
	 			calculate(n1,n2,n3,n4);
			}
			else if(a==5)
			{
				cout << "Enter First value : ";
	 			cin >> n1;
	 			
	 			cout << "Enter Second value : ";
	 			cin >> n2;
				 
				cout << "Enter Third value : ";
	 			cin >> n3;
	 			
	 			cout << "Enter Forth value : ";
	 			cin >> n4;
	 			
	 			cout << "Enter Fifth value : ";
	 			cin >> n5;
	 			
	 			calculate(n1,n2,n3,n4,n5);
			}
	 		
		}
};

int main()
{
	B obj;
	obj.setter(); 
	
	return 0;
}
