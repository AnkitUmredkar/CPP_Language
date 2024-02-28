//5. Overload the `+` operator for the `BankAccount` class to display account details. Create two `BankAccount` objects 
//and demonstrate the use of the overloaded `+` operator to display total amount of both accounts.

#include<iostream>
using namespace std;

class BankAccount
{
	int balance,accnum;
	string name;
	
	public :
		void set()
		{
			cout << "Enter the Account Number : ";
			cin >> accnum;
			cin.ignore();
			
			cout << "Enter the Account Holder name : ";
			getline(cin,name);
			
			cout << "Enter the balance : ";
			cin >> balance;	
		}
		void get()
		{
			cout << endl << "Total Balance of both Account is : " << balance;
		}
		BankAccount	operator+(BankAccount b2)
		{
			BankAccount temp;
			temp.balance = balance + b2.balance;
			return temp;
		}
};

int main()
{
	BankAccount b1,b2,b3;
	
	cout << "Enter the Account holder 1 Details " << endl;
	cout << "-------------------------" << endl;
	b1.set();
	cout << "-------------------------" << endl;
	
	cout << endl << "Enter the Account holder 2 Details " << endl;
	cout << "-------------------------" << endl;
	b2.set();
	cout << "-------------------------" << endl;
	
	b3 = b1 + b2;//b1.operator+.(b2);
	
	b3.get();
	
	return 0;
}
