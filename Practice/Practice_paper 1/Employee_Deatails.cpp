//Define a class named `Employee` with private attributes `name`, `salary`, and `designation`. Encapsulate these attributes using appropriate access specifiers. Implement public 
//member functions to set and get the values of these attributes. Demonstrate the encapsulation concept by accessing these attributes through the member functions.

#include<iostream>
using namespace std;

class Employee
{
	string designation,name;
	int salary;
	public :
		void set()
		{
			cout << "Enter the name : ";
			getline(cin, name);
			
			cout << "Enter the salary  : ";
			cin >> salary;
			
			cin.ignore();
			cout << "Enter the Designation : ";
			getline(cin, designation);
		}
		void get()
		{
			cout << endl << "Employee Name        : " << name;
			cout << endl << "Employee Salary      : " << salary;
			cout << endl << "Employee Designation : " << designation;
		}
		
};

int main()
{
	Employee e1;
	e1.set();
	e1.get();
	
	return 0;
}
