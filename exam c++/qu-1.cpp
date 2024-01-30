//1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch

#include<iostream>
using namespace std;

class Dis
{
	public:
	int feet1,inc1;
	int feet2,inc2;
	
	void answer()
	{
		cout << "Enter the feet : ";
		cin >> feet1;
		
		cout << "Enter the inc : ";
		cin >> inc1;
		
		cout<<endl<<endl;
		
		cout << "Enter the feet : ";
		cin >> feet2;
		
		cout << "Enter the inc : ";
		cin >> inc2;
		
		feet1 = feet1 + (inc1 / 12);
		inc1 = (inc1 % 12);
		
		feet2 = feet2 + (inc2 / 12);
		inc2 = (inc2 % 12);
		
		cout << endl << "Feet   : " << feet1+feet2 << endl;
		cout << "Inches : " << inc1 + inc2;
	}
	
};

int main()
{
	Dis a;
	
	a.answer();
	
	return 0;
}
