//2. Define a class `Person` with private attributes `name`, `age`, and `address`. Encapsulate these attributes using getter and setter methods.
//Implement a parameterized constructor for the `Person` class. Create N number of objects using this constructor and display the details.

#include<iostream>
using namespace std;

class Person
{
	int age;
	string name,address;
	public :
		
		Person(string name,int age,string address)
		{
			this->name    = name;
			this->age     = age;
			this->address = address;
		}
		
		void getter()
		{
			cout << endl << endl << "Details Are Below " << endl;
			cout << "Age     : " << age << endl;
			cout << "Name    : " << name << endl;
			cout << "Address : " << address;
		}
};

int main()
{
	int i,n,age;
	string name,address,line;
	cout << "Enter any number : ";
	cin >> n;
	
	Person p1[n] = Person(name,age,address);
	
	for(i=0; i<n; i++)
	{
		cout << endl << endl << "Enter age : ";
		cin >> age;
		cin.ignore();
		
		cout << "Enter  person's name : ";
		getline(cin,name);
		
		cout << "Enter address : ";
		getline(cin,address);
	
		p1[i] = Person(name,age,address);
	}
	
	for(i=0; i<n; i++)
	{
		p1[i].getter();
	}

	return 0;
}

