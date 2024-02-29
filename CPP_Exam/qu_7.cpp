#include<iostream>
using namespace std;

class Animal
{
	public :
		virtual void sound() = 0;
		virtual void move() = 0;
};

class Dog : public Animal
{
	public :
		void sound()
		{
			cout << ">-------Dog------<" << endl;
			cout << "Dog Name is Here....." << endl;
		}
		void move()
		{
			cout << "This is Dog' Sound....." << endl;
		}
};

class Bird : public Animal
{
	public :
		void sound()
		{
			cout << endl << ">-------Bird------<" << endl;
			cout << "Bird Name is Here....." << endl;
		}
		void move()
		{
			cout << "This is Bird' Sound....." << endl;
		}
};

int main()
{
	Animal *a1[2];
	
	Dog d1;
	Bird b1;
	
	a1[0] = &d1;
	a1[1] = &b1;
	
	a1[0]->sound();
	a1[0]->move();
	
	a1[1]->sound();
	a1[1]->move();
	
	return 0;
}

