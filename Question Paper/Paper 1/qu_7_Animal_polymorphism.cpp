//7. Define an abstract class `Animal` with virtual functions `sound()` and `move()`. Implement concrete/normal classes `Dog` and `Bird` that inherit from `Animal`. Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Dog` and `Bird`. Call the `sound()` and `move()` functions for each object.

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
			cout << "-------Dog-------" << endl;
			cout << "This is the Dog's Sound.... " << endl;
		}
		void move()
		{
			cout << "Dog is Walking.... " << endl << endl;
		}
};

class Bird : public Animal
{
	public :
		void sound()
		{
				cout << "-------Bird-------" << endl;
			cout << "This is the Bird's Sound.... " << endl;
		}
		void move()
		{
			cout << "Bird is Flying.... " << endl;
		}
};

int main()
{
	Animal *a[2];
	Dog d1;
	Bird b1;
	
	a[0] = &d1;
	a[1] = &b1;
	
	a[0]->sound();
	a[0]->move();
	
	a[1]->sound();
	a[1]->move();
	
	return 0;
}

