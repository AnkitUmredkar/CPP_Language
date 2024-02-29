#include<iostream>
using namespace std;

class Employee
{
	private :
		int salary;	
		
	public :
		void set()
		{
			cout << "Enter the salary : ";
			cin >> salary;
		}
		void get()
		{
			cout << endl << "Total Salary : " << salary;
		}
		Employee operator+(Employee &e2)
		{
			Employee temp;
			temp.salary = this->salary + e2.salary;
			return temp;
		}
};

int main()
{
	Employee e1,e2,e3;
	
	cout << ">------First Employee------<" << endl;
	e1.set();
	
	cout << endl << ">------Second Employee------<" << endl;
	e2.set();
	
	e3 = e1 + e2;
	
	e3.get();
	
	return 0;
}

