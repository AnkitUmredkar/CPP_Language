/*1. Write a Program to make a Railway Reservation System.
Requirements:
(A) User Input: 
- Train Number
- Train Name
- Source
- Destination
- Train Time
(B) Display Records: 
- All Records
- By Searching Train Number
(C) Minimum 3 Input Train Records*/

#include <iostream>
using namespace std;

class Train 
{
    int TrainNumber,i;
    string TrainName,Destination,TrainTime;
    static string Source;
    public:

    	Train(int num,string name,string destination,string time) // Parameterized Constructor
	{
		TrainNumber = num;
		TrainName = name;
		Destination = destination;
		TrainTime = time;
	}
	
	void displayallrcrds(int i)
	{
		cout << endl << endl << "Train " << i+1 << " Deatils Are Below" << endl;
		cout << "-----------------------------------" << endl;
 		cout << "Train Number      : " << TrainNumber << endl;
		cout << "Train Name        : " << TrainName << endl;
		cout << "Train Source      : " << Source << endl;
		cout << "Train Destination : " << Destination << endl;
		cout << "Train Time        : " << TrainTime << ":00"<< endl;
		cout << "-----------------------------------" << endl;
	}
}; 

string Train::Source = "Surat";

int main() 
{
	int n,i,num,choise,srch;
	string name,src,destination,time;
	
	cout << "How many Train's Information You Want Enter That number : ";
	cin >> n;
	
	Train t[n] = Train(num,name,destination,time); // Declaration of an Array of Object
	
	int arr[n];
	
	for(i = 0; i < n; i++)	// Input Process
	{
		cout << endl << endl << "Enter Train " << i+1 << " Details";
		cout << endl << "----------------------------" << endl;
		cout << "Enter Train Number: ";
        	cin >> num;
        	cin.ignore();  // Clear the newline character from the buffer

        	cout << "Enter Train Name: ";
        	getline(cin, name);

        	cout << "Enter Destination Source: ";
        	getline(cin, destination);

        	cout << "Enter Train Time: ";
        	getline(cin, time);
		
		arr[i] = num;
		t[i] = Train(num,name,destination,time);
	
	}
	
	do
	{
		cout << "\nRailway Reservation System\n";
	        cout << "Press : 1 for Display All Records\n";
	        cout << "Press : 2 for Search by Train Number\n";
	        cout << "Press : 3 for Exit\n";
	        cout << "Enter your choice: ";
	        cin >> choise;
		
		switch(choise) // Output Process
		{
			case 1 : 
				for(i=0; i<n; i++)
				{
					t[i].displayallrcrds(i);
				}
				break;	
				
			case 2:
				cout << "\nEnter the Train Number to Search : ";
				cin >> srch;
				for(i=0; i<n; i++)
				{
					if(arr[i] == srch)
					{
						t[i].displayallrcrds(i);
					}
				}
				break;
				
			case 3:
				cout << endl << "Progran Exit. Thank you!";
				break;
				
			default :
				cout << "Enter the valid choice Between (1 to 3)" << endl;
		}
		
	}while(choise!=3);
    
    return 0;
}
