//1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>
using namespace std;

class Information
{
	int hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	static int hotel_establish_year;
	string hotel_type,hotel_location;
	static string hotel_name;
	
	public:
	
	void input(int a)
	{
		cout << endl << endl << "Enter the " << a << " customer details \n";
		cout << "Enter the customer hotel id : ";
		cin >> hotel_id;
		cin.ignore();
		
		cout << "Enter the hotel type : ";
		getline(cin,hotel_type);
		
		cout << "Enter the hotel rating : ";
		cin >> hotel_rating;
		cin.ignore();
		
		cout << "Enter the hotel location : ";
		getline(cin,hotel_location);
		
		cout << "Enter the hotel staff quantity : ";
		cin >> hotel_staff_quantity;
		cin.ignore();
		
		cout << "Enter the hotel room quantity : ";
		cin >> hotel_room_quantity;
		cin.ignore();
	}
	void output(int a)
	{
		cout << endl << endl << "The customer " << a << " details are below" << endl;
		cout << "-------------------------------------------------- " << endl;
		cout << "Customer's hotel_id             : " << hotel_id << endl;
		cout << "Customer's hotel_name           : " << hotel_name << endl;
		cout << "Customer's hotel_type           : " << hotel_type << endl;
		cout << "Customer's hotel_rating         : " << hotel_rating << " star" << endl;
		cout << "Customer's hotel_location       : " << hotel_location << endl;
		cout << "Customer's hotel_establish_year : " << hotel_establish_year << endl;
		cout << "Customer's hotel_staff_quantity : " << hotel_staff_quantity << endl;
		cout << "Customer's hotel_room_quantity  : " << hotel_room_quantity << endl;
	}
};

int Information::hotel_establish_year = 1990;
string Information::hotel_name = "Umaid Bhawan Palace";

int main()
{
	int i,n,a=1;
	
	cout << "Enter the number of customer : ";
	cin >> n;
	
	Information s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input(a);
		a++;
	}
	
	a=1;
	
	for(i=0; i<n; i++)
	{
		s[i].output(a);
		a++;
	}
	
	
 	return 0;
}
