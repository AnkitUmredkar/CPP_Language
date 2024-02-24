//7. Define an abstract class `Animal` with virtual functions `sound()` and `move()`. Implement concrete/normal classes `Dog` and `Bird` that inherit from `Animal`. Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Dog` and `Bird`. Call the `sound()` and `move()` functions for each object.

#include<iostream>
using namespace std;

class Animal
{
	protected :
		virtual void sound() = 0;
		virtual void move() = 0;	
};

class Dog : public Animal
{
	public :
		void sound()
		{
			
		}
		void move()
		{
			
		}
};

class Bird : public Animal
{
	public :
		void sound()
		{
			
		}
		void move()
		{
			
		}
};

int main()
{
	return 0;
}

