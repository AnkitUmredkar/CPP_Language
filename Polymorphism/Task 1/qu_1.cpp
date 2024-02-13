//1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition


#include<iostream>
using namespace std;

class Arithmetic
{
	protected :
		int n1,n2,n3,n4,n5;
};

class Answer : public Arithmetic
{
	public :

		calculate(int n1,int n2)
		{
			cout << endl << "Division is       : " << n1 / n2;
		}
		
		calculate(int n1,int n2,int n3)
		{
			cout << endl << "Substraction is   : " << n1 - n2 - n3;
		}
		
		calculate(int n1,int n2,int n3,int n4)
		{
			cout << endl << "Multiplication is : " << n1 * n2 * n3 * n4;
		}
		
		calculate(int n1,int n2,int n3,int n4,int n5)
		{
			cout << endl << "Addition is       : " << n1 + n2 + n3 + n4 + n5;
		}
};

int main()
{
    Answer obj;

    obj.calculate(1,2,3,4,5);
    obj.calculate(10,3,2);
    obj.calculate(1,2,3,4);
    obj.calculate(10,2);
	
	return 0;
}
