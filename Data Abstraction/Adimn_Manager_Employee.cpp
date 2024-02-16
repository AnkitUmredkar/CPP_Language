//1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate

#include<iostream>
using namespace std;

class Employee
{
	protected :
	string company_name = "L & T";
	int total_annual_revenue = 250000;  
		
		public :
		void myAccess()
		{
			cout << "By Employee Access   : " << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		}
};

class Manager : public Employee
{
	protected :
		int employee_salary = 15000;
		int total_staff = 30;
		int can_terminate = 10;
		
		public :
		void myAccess()
		{
			cout << endl << endl << "By Manager Access  " << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		}
		
};

class Admin : public Manager
{
	protected :
		int manager_salary = 70000;
		
		public :
		void myAccess()
		{
			cout << endl << endl << "By Admin Access : " << endl;
			cout << "Manager Salary       : " << manager_salary << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue;
		}
};


int main()
{
	Employee e1;
	Manager m1;
	Admin a1;
	
	e1.myAccess();
	m1.myAccess();
	a1.myAccess();
	
	
	return 0;
}
