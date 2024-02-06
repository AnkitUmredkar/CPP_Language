/*2. Write a Program to make a Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number*/

#include<iostream>
using namespace std;

class SuperMarket
{
	int ItemNumber,quantity,price,discount;
	string ItemName;
	public:
		SuperMarket(int a,string b, int c,int d,int e)
		{
			ItemNumber = a;
			ItemName = b;
			quantity = c;
			price = d;
			discount = e;
		}
		void output(int i)
		{
			cout << endl << endl << "The SuperMarket Item " << i+1 << " Details Are Below : " << endl;
			cout << "-----------------------------------" << endl;
			cout << "Item Number : " << ItemNumber << endl;
			cout << "Item Name   : " << ItemName << endl;
			cout << "Quantity    : " << quantity << endl;
			cout << "Item Price  : " << price << endl;
			cout << "Discount    : " << discount << " %" << endl;
			cout << "-----------------------------------" << endl;
		}		
		
};


int main()
{
	int n,i,a,c,d,e,choice,srch,v=0;
	string b,id,id1,pswrd,pswrd1;
	
	cout << "Enter the number of Item : ";
	cin >> n;
	int arr[n];
	SuperMarket obj[n] = SuperMarket(a,b,c,d,e);
	
	cout << "Enter the your id : ";
	cin >> id;
	
	cout << "Enter the your Password : ";
	cin >> pswrd;
	
	for(i=0; i<n; i++)
	{	
		cout << endl << endl << "Enter the SuperMarket details : " << endl;
		cout << "Enter the Item Number : ";
		cin >> a;
		cin.ignore();
			
		cout << "Enter the Item Name : ";
		getline(cin, b);
			
		cout << "Enter the Quantity : ";
		cin >> c;
		
		cout << "Enter the Item price : ";
		cin >> d;
			
		cout << "Enter the Discount : ";
		cin >> e;
		
		arr[i] = a;
		obj[i] = SuperMarket(a,b,c,d,e);
	}
	start:
	cout << endl << "Enter the your id to verify : ";
	cin >> id1;
	
	if(id == id1)
	{
		cout << "Yes, Your ID is Correct" << endl;
		start1:
		cout << endl << "Enter the your password to verify : ";
		cin >> pswrd1;
		if(pswrd == pswrd1)
		{
			cout << "Yes, Your Password is Correct";
			do
			{
				cout << endl << endl << "SuperMarket Billing System\n";
				cout << "Press 1. for Display all Records" << endl;
				cout << "Press 2. for Search Item Number" << endl;
				cout << "Press 3. for Exit" << endl;
				
				cout << "Enter Your Choice : ";
				cin >> choice;
				switch(choice)
				{
					case 1 : 
						for(i=0; i<n; i++)
						{
							obj[i].output(i);
						}
						break;
						
					case 2 :
						cout << "Enter The Item Number Which you want : ";
						cin >> srch;
						for(i=0; i<n; i++)
						{
							if(arr[i] == srch)
							{
								obj[i].output(i);
							}
						}
						break;
						
					case 3 :
						cout << endl << "Program Exit, Thank you" << endl;
						break;
						
					default :
						cout << endl << "Enter the valid choice between (1 to 3) : " << endl;
						
				}
			}while(choice != 3);
		}
		else
		{
			cout << endl << "Your Password is Wrong !!";
			goto start1;
		}
	}
	else
	{
		cout << endl << "Your ID is Wrong !!";
		goto start;
	}
	
	return 0;
}

