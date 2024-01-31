//1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college


#include<iostream>
using namespace std;

class Student
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_email,stu_college,line;
	
	public:
	
	void input(int a)
	{
		cout << endl << endl << "Enter the " << a << " student details" << endl;
		cout << "Enter the student id : ";
		cin >> stu_id;
		
		getline(cin,line);
		cout << "Enter the student name : ";
		getline(cin, stu_name);
		
		cout << "Enter the student age : ";
		cin >> stu_age;
		
		getline(cin,line);
		cout << "Enter the student cource : ";
		getline(cin, stu_course);
		
		cout << "Enter the student city : ";
		getline(cin, stu_city);
		
		getline(cin,line);
		cout << "Enter the student e-mail : ";
		getline(cin, stu_email);
		
		getline(cin,line);
		cout << "Enter the student college : ";
		getline(cin, stu_college);
	}
	
	void show(int a)
	{
		cout <<endl<< "The " << a << " student details are below :" << endl;
		cout << "Student id      : " << stu_id << endl;
		cout << "Student name    : " << stu_name << endl;
		cout << "Student age     : " << stu_age << endl;
		cout << "Student cource  : " << stu_course << endl;
		cout << "Student city    : " << stu_city << endl;
		cout << "Student e-mail  : " << stu_email << endl;
		cout << "Student college : " << stu_college << endl;
	}
};

int main()
{
	int i,n=5,a=1;
	Student s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input(a);
		s[i].show(a);
		a++;
	}

 	return 0;
}
