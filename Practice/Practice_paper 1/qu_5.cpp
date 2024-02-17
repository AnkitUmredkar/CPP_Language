//5. Overload the `+` operator for the `Employee` class to add the salaries of two employees. Create two `Employee` objects and demonstrate the use of the overloaded
// `+` operator to calculate and display the total salary.

#include<iostream>
using namespace std;

class Employee
{
	int salary;
	public :
		void set()
		{
			cout << "Enter the salary of Employee :";
			cin >> salary;	
		}
		void get()
		{
			cout << "Salary : " << salary;	
		}
		Employee operator +(Employee e2)
		{
			Employee sum;
			sum.salary = salary + e2.salary;
			return sum;	
		}	
};

int main()
{
	Employee e1,e2,e3;
	
	e1.set();
	e2.set();
	
	e3 = e1 + e2;
	
	e3.get();
	
	return 0;
}
