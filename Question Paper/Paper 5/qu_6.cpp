//6. Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70

#include<iostream>
using namespace std;

class Ankit
{
	protected :
	int km,meter;
	
	public :
		void set()
		{
			cout << "Enter the km : ";
			cin >> km;
			
			cout << "Enter the meter : ";
			cin >> meter;	
		}
		void get()
		{
			cout << endl << "KM : "	<< km << ", " << "Meter : " << meter;
		}
		Ankit operator+(Ankit a2)
		{
			Ankit temp;
			
			temp.km = (km + a2.km) + ((meter + a2.meter) / 1000);
			temp.meter = ((meter + a2.meter) % 1000);
			
			return temp;	
		}	
};

int main()
{
	Ankit a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3 = a1 + a2; //a1.operator+(a2)
	a3.get();
	
	return 0;
}
