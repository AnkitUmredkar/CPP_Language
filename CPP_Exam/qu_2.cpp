#include<iostream>
using namespace std;

class Employee
{
	private :
		string name,designation;
		int salary;	
		
	public :
		void set(int i)
		{
			cout  << endl << "Enter the Employee " << i+1 << " Details" << endl;
			
			cout << "Enter the Salary : ";
			cin >> salary;
			cin.ignore();
			
			cout << "Enter the name : ";
			getline(cin,name);
			
			cout << "Enter the designation : ";
			getline(cin,designation);
			cout << endl << endl;
		}
		void get(int i)
		{
			cout << endl << "Employee " << i+1 << " Details are Below : " << endl;
			cout << "-----------------------" << endl;
			cout << "Name        : " << name << endl;
			cout << "Salary      : " << salary << endl;
			cout << "Designation : " << designation << endl;
			cout << "-----------------------" << endl; 
		}
};

int main()
{
	int i,n;
	cout << "Enter the Number of Employee : ";
	cin >> n;
	
	Employee e1[n];
	
	
	for(i=0; i<n; i++)
	{
		e1[i].set(i);
	}
	
	for(i=0; i<n; i++)
	{
		e1[i].get(i);
	}
	
	return 0;
	
}

