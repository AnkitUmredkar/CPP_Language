//1.Create a class `Student` with private attributes `name`, `rollNumber`, and a parameterized constructor. Demonstrate the instantiation of 
//objects using this constructor with help of array.

#include<iostream>
using namespace std;

class Student
{
	int rollNumber;
	string name;
	public :
		Student(string name,int rollNumber)
		{
			this->name = name;
			this->rollNumber = rollNumber;
		}
		void get(int i)
		{
			cout << endl << endl << "Student " << i+1 << " Details Are Below" << endl;
			cout << "----------------------" << endl;
			cout << "Student Name       : " << name << endl;
			cout << "Student RollNumber : " << rollNumber;
 		}	
};

int main()
{
	int i,n,rollNumber;
	string name;
	
	cout << "Enter the Number of student : ";
	cin >> n;
	
	Student s1[n] = Student(name,rollNumber);
	
	for(i=0; i<n; i++)
	{
		cout << endl << "Enter the Student " << i+1 << " Details" << endl;
		cin.ignore();
		cout << "Student Name : ";
		getline(cin,name);
		
//		cin.ignore();
		cout << "Student RollNumber : ";
		cin >> rollNumber;
		
		s1[i] = Student(name,rollNumber);
	}
	
	for(i=0; i<n; i++)
	{
		s1[i].get(i);
	}
	

	return 0;
}

