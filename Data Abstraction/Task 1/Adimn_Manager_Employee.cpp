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
		string company_name,can_terminate;
		int total_annual_revenue,employee_salary,total_staff,manager_salary;
	
	public :
		void myAccess()
		{
			cout << endl << endl << "---------- By Employee Access ----------" << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		}
};

class Manager : public Employee
{
	public :
		void myAccess()
		{
			cout << endl << endl << "---------- By Manager Access ----------" << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
		}
		
};

class Admin : public Manager
{	
	public : 
		void set()
		{
			cout << "Enter the Company Name : ";
			getline(cin, company_name);
				
			cout << "Enter the Total Annual Revenue : ";
			cin >> total_annual_revenue;
			
			cout << "Enter the Employee Salary : ";
			cin >> employee_salary;
				
			cout << "Enter the Total Staff : ";
			cin >> total_staff;
			cin.ignore();
				
			cout << "Enter Can Terminate : ";
			getline(cin, can_terminate);
				
			cout << "Enter the manager Salary : ";
			cin >> manager_salary;
		}
		void myAccess()
		{
			cout << endl << endl << "---------- By Admin Access ----------" << endl;
			cout << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			cout << "Manager Salary       : " << manager_salary;
		}
};


int main()
{
	Employee e1;
	Manager m1;
	Admin a1;
	
	a1.set();
	a1.Employee :: myAccess();
	a1.Manager :: myAccess();
	a1.myAccess();
	
	
	return 0;
}
