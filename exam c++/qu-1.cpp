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
	int feet1,inc1,feet2,inc2,totalfeet,totalinc;
	
	public:
		
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
		
		totalfeet = (feet1 + feet2) + ((inc1 + inc2) / 12);
		totalinc  = ((inc1 + inc2)% 12);
		
		cout << endl << "Feet  : " << totalfeet << " , Inches : " << totalinc;
	}
	
};

int main()
{
	Dis a;
	
	a.answer();
	
	return 0;
}
