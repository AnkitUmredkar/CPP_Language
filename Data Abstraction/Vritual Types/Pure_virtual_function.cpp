//Demonstrate Pure_virtual_function

#include<iostream>
using namespace std;

class Mcd
{
	protected :
	int income,profit,royalty = 1000;
		
		virtual void business() = 0;	
};

class Shakha : public Mcd
{
	public :
		void business()
		{
			cout << "Enter Income : ";
			cin >> income;
		}
		void netProfit()
		{
			profit = income - royalty;
			cout << "Profit : " << profit;
		}
};

class Shakha2 : public Mcd
{
	public :
		void business()
		{
			cout << endl << endl << "Enter Income : ";
			cin >> income;
		}
		void netProfit()
		{
			profit = income - royalty;
			cout << "Profit : " << profit;
		}
};

int main()
{
	Shakha s1;
	s1.business();
	s1.netProfit();
	
	Shakha2 s2;
	s2.business();
	s2.netProfit();
	return 0;
}

