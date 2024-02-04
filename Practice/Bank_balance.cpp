#include<iostream>
using namespace std;

class Bank
{
	double balance,diposite,TotalBalance;
	
	public:
	
	void input()
	{
		start1:
		balance = 10000;
		cout << "Balance : " << balance;
		cout << "\nEnter the deposite amount : ";
		cin >> diposite;
		TotalBalance = balance+diposite;
		cout << "Total Balance : " << TotalBalance;
		if(diposite > 0)
		{
			process();
		}
		else
		{
			printf("Which amonut you enter should be positive !!");
			goto start1;
		}
	}
	void process()
	{
		float amt;
		start2:
		cout << endl << "Enter the withdrawn amount : ";
		cin >> amt;
		if(amt > 0)
		{
			TotalBalance = TotalBalance - amt;
			output();
		}
		else
		{
			cout << "Withdrawn amount should be positive!!";
			goto start2;
		}
		
	}
	void output()
	{
		cout << endl << "your balance is : " <<TotalBalance;
	}
};



int main()
{
	Bank obj;
	
	obj.input();
	
	return 0;
}

