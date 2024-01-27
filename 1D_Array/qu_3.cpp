#include<iostream>
using namespace std;

int main()
{
	int feet,inc;
	
	cout << "Enter the feet : ";
	cin >> feet;
	
	cout << "Enter the inches : ";
	cin >> inc;
	
	feet = feet + (inc / 12);
	inc = inc % 12;
	
	cout << endl << "Feet - " << feet << ",";
	cout << " Inches - " << inc;
	
 	return 0;
}
