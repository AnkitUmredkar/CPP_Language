//3. Define a base class `Vehicle` with private attributes `model` and `speed`. Implement public member functions for setting and getting these 
//attributes. Derive two classes, `Car` and `Bike`, from the `Vehicle` class. Implement methods to calculate the time taken for a certain distance 
//based on the speed of each vehicle. Demonstrate abstraction by calling the time calculation methods for both `Car` and `Bike`.
//speed = distance/time 
#include<iostream>
using namespace std;

class Vehicle
{
	protected :
		string model;
		float speed;
		virtual void calculation() = 0;
	
	public :
		void set()
		{
			cout << "Enter model name : ";
			cin >> model;
			
			cout << "Enter the speed : ";
			cin >> speed;
		}
		void get(float time)
		{
			cout << time << " hour"<< endl << endl;	
		}	
};

class Car : public Vehicle
{
	float dis,time;
	public : 
		void calculation()
		{
			set();
			cout << "Enter the distance in KM: ";
			cin >> dis;
			
			cout << endl << "Car Model Name is : " << model << endl;
			cout << "Car Speed is      : " << speed << " km/h" << endl;
			
			time = dis / speed;
			cout << endl << "The time which taken by Car : ";
			get(time);
		}
};

class Bike : public Vehicle
{
	int dis,time;
	public : 
		void calculation()
		{
			set();
			cout << "Enter the distance : ";
			cin >> dis;
			
			cout << endl << "Bike Model Name is : " << model << endl;
			cout << "Bike Speed is      : " << speed << " km/h" << endl;
			
			time = dis / speed;
			cout << endl << "The time which taken by Bike : ";
			get(time);
		}
};

int main()
{
	Car c1;
	c1.calculation();
	
	Bike b1;
	b1.calculation();
	
	return 0;
}

