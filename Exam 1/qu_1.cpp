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

class Distance 
{
	int feet,inc,sumfeet=0,suminc=0,totalfeet,totalinc;
	
	public:
		
	void getDistance()
	{
		cout << "Enter the feet : ";
		cin >> feet;
		
		cout << "Enter the inc : ";
		cin >> inc;
		
		sumfeet = sumfeet + feet;
		suminc  = suminc + inc;
	}
	
	void showDistance()
	{
		totalfeet = (sumfeet) + (suminc / 12);
		totalinc  = (suminc % 12);
		
		cout << endl << "Feet  : " << totalfeet << " , Inches : " << totalinc;
	}
	
};

int main()
{
	Distance obj;
	
	cout << "Input 1 : " << endl;
	obj.getDistance();
	
	cout << endl << "Input 2 : " << endl;
	obj.getDistance();
	
	obj.showDistance();
	
	return 0;
}
