//2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year

#include<iostream>
using namespace std;

class Car
{
	public:
	int id,release_year;
	string color,model,cmp_name,line;
	
	void input(int a)
	{
		cout << endl << endl << "Enter the "<< a <<" Car details" << endl;
			
		cout << "Enter the id of car : ";
		cin >> id;
		
		getline(cin,line);	
		cout << "Enter the company_name of car : ";
		getline(cin, cmp_name);
		
		cout << "Enter the release year of car : ";
		cin >> release_year;
		
		getline(cin,line);	
		cout << "Enter the color of car : ";
		cin >> color;
		
		getline(cin,line);
		cout << "Enter the model of car : ";
		getline(cin, model);
		
	}
	
	void output(int a)
	{
		cout << endl << "The " << a << " Car details are below : " << endl;
		cout << "Car ID          : " << id << endl;
		cout << "Company_name    : " << cmp_name << endl;
		cout << "Release_year    : " << release_year << endl; 
		cout << "Car color       : " << color << endl;
		cout << "Car model       : " << model << endl;  
	}
	
};

int main()
{
	int i,n=4,a=1;
	Car e[n];
	
	for(i=0; i<n; i++)
	{
		e[i].input(a);
		a++;
	}
	a=1;
	for(i=0; i<n; i++)
	{
		e[i].output(a);
		a++;
	}
	
 	return 0;
}
