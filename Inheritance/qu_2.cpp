/*2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method.*/

#include<iostream>
using namespace std;

class P
{
	protected :
	float degree,Fahrenheit,Kelvin;
};

class Q : public P
{
	public :
		
		void toFahrenheit()
		{
			cout << "Enter degree Celsius temperature : ";
			cin >> degree;
			
			Fahrenheit = (9.0/5.0 * degree) + 32;
			
		}
};

class R : public Q
{
	public :
		
		void toKelvin()
		{
			Kelvin = (5.0/9.0) * (Fahrenheit + 459.67); //(T)K = 5/9 [(T)F + 459.67] From Google
		}
		
		void output()
		{
			cout << endl << "From Degree to Fahrenheit Converstion is : " << Fahrenheit << endl;
			cout << endl << "From Fahrenheit to Kelvin Converstion is : " << Kelvin << endl;
		}
};

int main()
{
	R obj;
	
	obj.toFahrenheit();
	obj.toKelvin();
	obj.output();
	
	
	
	return 0;
}
