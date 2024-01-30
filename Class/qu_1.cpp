//1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. 
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

#include<iostream>
using namespace std;

class Employee
{
	public:
	int id,age,salary,exp;
	string name,role,city,cmp_name,line;
	
	void input(int a)
	{
		cout << endl << endl << "Enter the "<< a <<" Employee details" << endl;
		cout << "Enter the Name of employee : ";
		getline(cin, name);
			
		cout << "Enter the id of employee : ";
		cin >> id;
		
		getline(cin,line);	
		cout << "Enter the role of employee : ";
		cin >> role;
			
		cout << "Enter the age of employee : ";
		cin >> age;
			
		cout << "Enter the Experience year employee : ";
		cin >> exp;
			
		getline(cin,line);
		cout << "Enter the City of employee : ";
		getline(cin, city);
			
		cout << "Enter the salary of employee : ";
		cin >> salary;
		
		getline(cin,line);	
		cout << "Enter the company_name of employee : ";
		getline(cin, cmp_name);	
		
	}
	
	void output(int a)
	{
		cout << endl << "The " << a << " Employee details are below : " << endl;
		cout << "Name       : " << name << endl;
		cout << "ID         : " << id << endl;
		cout << "Role       : " << role << endl;
		cout << "Age        : " << age << endl;
		cout << "Experience : " << exp << endl;
		cout << "City       : " << city << endl;
		cout << "Salary     : " << salary << endl;
		cout << "Company_name : " << cmp_name << endl;
	}
	
};

int main()
{
	int i,n=5,a=1;
	class Employee e[n];
	
	for(i=0; i<n; i++)
	{
		e[i].input(a);
		a++;
	}
	a=1;
	for(i=0; i<n; i++)
	{
		e[i].output(a);
		a++;
	}
	
 	return 0;
}
