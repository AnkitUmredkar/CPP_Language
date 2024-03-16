//Write a Program to create a Message class with a constructor that takes a single string with a default value. Create a private member of the typed string, and in the 
//constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply 
//prints the message stored in the variable and one that takes a string argument, which it prints in addition to the internal message.

#include<iostream>
using namespace std;

class Message
{
	string msg;
	public :
		Message(string msg)
		{
			this->msg = msg;
		}
		
	public :
		void print()
		{
			cout << endl << msg << endl;
		}
		
		void print(string msg)
		{
			cout << endl << this->msg << " " << msg << endl;
		}
};

int main()
{
	string msg;
	cout << "Enter Any String : " ;
	cin >> msg;
	
	Message m1(msg);
	
	cout << "Enter Any String : " ;
	cin >> msg;
	m1.print();
	m1.print(msg);
	
	
}
