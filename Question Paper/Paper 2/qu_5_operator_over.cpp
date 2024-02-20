//5. Overload the `+` operator for the `BankAccount` class to display account details. Create two `BankAccount` objects and demonstrate the use of 
//the overloaded `+` operator to display total amount of both accounts.

#include<iostream>
using namespace std;

class BankAccount
{
	private :
		int balance;
	public :
		
		void set()
		{
			cout << "Enter the balance : ";
			cin >> balance;
		}
		void display()
		{
			cout << endl << "Total Balance : " << balance;
		}
		BankAccount operator +(BankAccount b2)
		{
			BankAccount temp;
			temp.balance = this->balance + b2.balance;
			
			return temp;
		}
};

int main()
{
	BankAccount b1,b2,b3;
	
	cout << "-- First Account : " << endl;
	b1.set();
	
	cout << endl << "--Second Account  " << endl;
	b2.set();
	
	b3 = b1 + b2;
	
	b3.display();
	
	return 0;
}
