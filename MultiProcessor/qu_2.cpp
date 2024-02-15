//2 Write a Program to add two distances using binary plus (+) operator overloading.

#include<iostream>
using namespace std;

class Distance
{
	int Km,Meter;
	
	public :
		void set()
		{
			cout << "Enter the KiloMeter : ";
			cin >> Km;
			
			cout << "Enter the Meter : ";
			cin >> Meter;	
		}
		
		void get()
		{
			cout <<	endl << "Km : " << Km;
			cout << endl << "Meter : " << Meter;
		} 
		
		Distance operator +(Distance obj2)
		{
			Distance temp;
				
			temp.Km    =  (Km + obj2.Km) + ((Meter + obj2.Meter) / 1000);
			temp.Meter = ((Meter + obj2.Meter) % 1000);
			
			return temp;
		}	
};

int main()
{
	Distance obj1,obj2,obj3;
	
	cout << "Input 1 :" << endl;
	obj1.set();
	
	cout  << endl << "Input 2 :" << endl;
	obj2.set();
	
	obj3 = obj1 + obj2;
	
	obj3.get();
	
	return 0;
}
