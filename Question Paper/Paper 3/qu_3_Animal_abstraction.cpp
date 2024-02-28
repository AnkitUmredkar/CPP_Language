//3. Define a base class `Animal` with private attributes `name` and `sound`. Implement public methods for setting and getting these attributes. 
//Derive two classes, `Dog` and `Cat`, from the `Animal` class. Implement methods to make each animal produce its specific sound. Demonstrate 
//abstraction by calling the sound methods for both `Dog` and `Cat`.

#include<iostream>
using namespace std;

class Animal
{
	private:
		string name,sound;
		
	protected :
		virtual void makeSound() = 0;
		
	public :
		void set()
		{
			cout << "Enter Animal Name : ";
			getline(cin,name);
			
			cout << "Enter a Sound : ";
			getline(cin,sound);
		}
		
		void get()
		{
			cout << endl << "-----Animal Details-----" << endl;
			cout << "Name  : " << name << endl;
			cout << "Sound : " << sound << endl << endl;
		}
};

class Dog : public Animal
{
	public :
		void makeSound()
		{
			set();
			get();
		}
};

class Cat : public Animal
{
	public :
		void makeSound()
		{
			set();
			get();
		}
};

int main()
{
	Dog d1;
	d1.sound();
	
	Cat c1;
	c1.sound();
	
	return 0;
}

