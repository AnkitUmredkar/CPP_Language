//3 Write a Program to read and print Employee information with the use of Multilevel inheritance.

#include<iostream>
using namespace std;

class A
{
	protected :
		int emp_id;
		string emp_name,emp_role;

		void setter()
		{
			cout << "Enter the Employee ID : ";
			cin >> emp_id;
			cin.ignore();
			
			cout << "Enter the Employee Name : ";
			getline(cin, emp_name);
			
			cout << "Enter the Employee Role : ";
			getline(cin, emp_role);
		}
			
};

class B : public A
{
	protected :
		int emp_salary,emp_exp;

		void setter()
		{
			A::setter();
			cout << "Enter the Employee Salary : ";
			cin >> emp_salary;
			cin.ignore();
			
			cout << "Enter the Employee Wrok Experience : ";
			cin >> emp_exp;
		}	
};

class C : public B
{
	protected :
		string comp_name,emp_address;

		void setter()
		{	
			B :: setter();
			cin.ignore();
			cout << "Enter the Company Name : ";
			getline(cin, comp_name);
			
			cout << "Enter the Employee Address : ";
			getline(cin, emp_address);
		}
		
		void getter()
		{
			cout << "Employee's Name        : " << emp_name << endl;
			cout << "Employee's Role        : " << emp_role << endl;
			cout << "Employee's Salary      : " << emp_salary << endl;	
		}		
};

class D : public C
{
	protected :
		string e_mail, emp_contect;

	public :
		void setter()
		{
			C :: setter();
			cout << "Enter the E-mail id : ";
			getline(cin, e_mail);
			
			cout << "Enter the Employee contect : ";
			cin >> emp_contect;
		}
	
		void getter()
		{
			cout << endl << endl << "The Employee's Details is Below" << endl;
			cout << "---------------------------------" << endl;
			cout << "Employee's ID          : " << emp_id << endl;
			C :: getter();
			cout << "Employee's Experience  : " << emp_exp  << " Year"<< endl;	
			cout << "Company Name           : " << comp_name << endl;
			cout << "Employee's Address     : " << emp_address << endl;
			cout << "Employee's E-mail      : " << e_mail << endl;
			cout << "Employee's Contect     : " << emp_contect << endl;
			cout << "---------------------------------" << endl;
		}		
};


int main()
{
	D obj;
	obj.setter();
	obj.getter();

	return 0;
}
