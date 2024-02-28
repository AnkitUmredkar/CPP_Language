//Create a class `Laptop` with private attributes `name`, `price`, `processor`, and a parameterized constructor. Demonstrate the instantiation of objects 
//using this constructor.

#include<iostream>
using namespace std;

class Laptop
{
	string name,processor;
	int price;
	
	public :
		Laptop(string name,int price,string processor)
		{
			this->name = name;
			this->price = price;
			this->processor = processor;		
		}
		
		void get(int i)
		{
			cout << endl << endl << "Laptop " << i+1 << " Details are below " << endl;
			cout << "------------------------------" << endl;
			cout << "Name      : " << name << endl;
			cout << "Price     : " << price << endl;
			cout << "processor : " << processor << endl;
			cout << "------------------------------" << endl << endl;
		}		
};

int main()
{
	int n,i,price;
	string name,processor;
	
	cout << "Enter the number : ";
	cin >> n;
	
	Laptop obj[n] = Laptop(name,price,processor);
	
	for(i=0; i<n; i++)
	{
		cout << " Enter the Laptop Company name : ";
		cin >> name;
		
		cout << " Enter the Laptop Price : ";
		cin >> price;
		
		cout << " Enter the Laptop Processor name : ";
		cin >> processor;
		cout << endl << endl;
		
		obj[i] = Laptop(name,price,processor);
	}
	
	for(i=0; i<n; i++)
	{
		obj[i].get(i);
	}
	
	
	
	return 0;
}
