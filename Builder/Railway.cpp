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
    string TrainName;
    string source;
    string destination;
    string TrainTime;
    public:

    Train(int a,string b,string c,string d,string e) 
	{
		TrainNumber = a;
		TrainName = b;
		source = c;
		destination = d;
		TrainTime = e;
	}
	
	void displayallrcrds(int i)
	{
		cout << endl << endl << "Train " << i+1 << " Deatils Are Below" << endl;
		cout << "-----------------------------------" << endl;
 		cout << "Train Number      : " << TrainNumber << endl;
		cout << "Train Name        : " << TrainName << endl;
		cout << "Train Source      : " << source << endl;
		cout << "Train Destination : " << destination << endl;
		cout << "Train Time        : " << TrainTime << endl;
		cout << "-----------------------------------" << endl;
	}
}; 

int main() 
{
	int n=3,i,a,choise,srch;
	string b,c,d,e;
	
	Train t[n] = Train(a,b,c,d,e);
	
	int arr[n];
	
	for(i = 0; i < n; i++)	
	{
		cout << endl << endl << "Enter Train " << i+1 << " Details";
		cout << endl << "Enter Train Number: ";
        cin >> a;
        cin.ignore();  // Clear the newline character from the buffer

        cout << "Enter Train Name: ";
        getline(cin, b);

        cout << "Enter Source: ";
        getline(cin, c);

        cout << "Enter Destination: ";
        getline(cin, d);

        cout << "Enter Train Time: ";
        getline(cin, e);
		
		arr[i] = a;
		t[i] = Train(a,b,c,d,e);
	
	}
	
	do
	{
		cout << "\nRailway Reservation System\n";
        cout << "Press : 1 for Display All Records\n";
        cout << "Press : 2 for Search by Train Number\n";
        cout << "Press : 3 for Exit\n";
        cout << "Enter your choice: ";
        cin >> choise;
		
		switch(choise)
		{
			case 1 : 
				for(i=0; i<n; i++)
				{
					t[i].displayallrcrds(i);
				}
				break;	
				
			case 2:
				cout << "Enter the Train Number to Search : ";
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
				cout << endl << "Progran Exit. Thank you";
				break;
				
			default :
				cout << "Enter the valid choice (1 to 3)" << endl;
		}
	}while(choise!=3);
    
    return 0;
}

