//2. Define a class `Car` with private attributes `model`, `year`, and `speed`. Encapsulate these attributes using appropriate access specifiers. 
//Implement public member functions to set and get the values of these attributes. Demonstrate encapsulation by accessing these attributes through 
//the member functions.

#include<iostream>
using namespace std;

class Car
{
	private :
	string model;
	int year,speed;
	public :
		void set(int i)
		{
			cout << "Enter the Car " << i+1 << " Detail" << endl;
			cin.ignore();
			cout << "Car Model : ";
			getline(cin, model);
			
			cout << "Car_Realeasd Year : ";
			cin >> year;
			
			cout << "Car Speed : ";
			cin >> speed;
			cout << endl << endl;
		}
		void get(int i)
		{
			cout << endl << endl << "Car " << i+1 << " Details Are Below" << endl;
			cout << "----------------------" << endl;
			cout << "Car Model : " << model << endl;
			cout << "Car Year  : " << year << endl;
			cout << "Car Speed : " << speed << endl;
 		}
};

int main()
{
	int i,n;
	
	cout << "Enter the number of a Car : ";
	cin >> n;
	
	Car c1[n];
	
	for(i=0; i<n; i++)
	{
		c1[i].set(i);
	}
	
	for(i=0; i<n; i++)
	{
		c1[i].get(i);
	}
	
	return 0;
}

