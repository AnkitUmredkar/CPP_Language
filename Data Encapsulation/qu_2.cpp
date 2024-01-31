//2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)

#include<iostream>
using namespace std;

class Customer
{
	int cust_id,cust_age,cust_simcard_validity;
	string cust_name,cust_city,cust_telecom_brand_name,stu_college,line,cust_mobile_number;
	
	public:
	
	void input(int a)
	{
		cout << endl << endl << "Enter the " << a << " student details" << endl;
		cout << "Enter the customers id : ";
		cin >> cust_id;
		
		getline(cin,line);
		cout << "Enter the customer name : ";
		getline(cin, cust_name);
		
		cout << "Enter the customer age : ";
		cin >> cust_age;
		
		getline(cin,line);
		cout << "Enter the customer city : ";
		getline(cin, cust_city);
		
		cout << "Enter the customer Mobile number : ";
		cin >> cust_mobile_number;
		
		cout << "Enter the customer validity in year : ";
		cin >> cust_simcard_validity;
		
		getline(cin,line);
		cout << "Enter the customer telecom brand name : ";
		getline(cin, cust_telecom_brand_name);
	}
	
	void show(int a)
	{
		cout <<endl<< "The " << a << " student details are below :" << endl;
		cout << "Customer id                 : " << cust_id << endl;
		cout << "Customer name               : " << cust_name << endl;
		cout << "Customer age                : " << cust_age << endl;
		cout << "Customer city               : " << cust_city << endl;
		cout << "Customer m-number           : " << cust_mobile_number << endl;
		cout << "Customer sim-validity       : " << cust_simcard_validity << " Year" << endl;
		cout << "Customer telecom-brand-name : " << cust_telecom_brand_name << endl;
	}
};

int main()
{
	int i,n=5,a=1;
	Customer s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input(a);
		a++;
	}
	
	a=1;
	
	for(i=0; i<n; i++)
	{
		s[i].show(a);
		a++;
	}
	
 	return 0;
}
