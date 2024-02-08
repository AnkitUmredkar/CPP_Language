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
	int ItemNumber,Quantity,Price;
	static int Discount;
	string ItemName;
	public:
		SuperMarket(int num,string name,int quan,int prc) // Parameterized Constructor
		{
			ItemNumber = num;
			ItemName = name;
			Quantity = quan;
			Price = prc;
		}
		void output(int i)
		{
			cout << endl << endl << "The SuperMarket Item " << i+1 << " Details Are Below : " << endl;
			cout << "-----------------------------------" << endl;
			cout << "Item Number : " << ItemNumber << endl;
			cout << "Item Name   : " << ItemName << endl;
			cout << "Quantity    : " << Quantity << endl;
			cout << "Item Price  : " << Price << endl;
			cout << "Discount    : " << Discount << " %" << endl;
			cout << "-----------------------------------" << endl;
		}		
		
};

int SuperMarket::Discount = 10;

int main()
{
	int n,i,num,quan,prc,dis,choice,srch;
	bool x;
	string name,id,id1,pswrd,pswrd1;
	
	cout << "How Many Item You Want Enter That Number : ";
	cin >> n;
	int arr[n];
	SuperMarket obj[n] = SuperMarket(num,name,quan,prc); // Declaration of an Array of Object
	
	cout << "Enter the your id : ";
	cin >> id;
	
	cout << "Enter the your Password : ";
	cin >> pswrd;
	
	for(i=0; i<n; i++) // Input Process
	{	
		cout << endl << endl << "Enter the SuperMarket details : " << endl;
		cout << "Enter the Item Number : ";
		cin >> num;
		cin.ignore();
			
		cout << "Enter the Item Name : ";
		getline(cin, name);
			
		cout << "Enter the Quantity : ";
		cin >> quan;
		
		cout << "Enter the Item price : ";
		cin >> prc;
		
		arr[i] = num;
		obj[i] = SuperMarket(num,name,quan,prc);
	}
	start:
	cout << endl << "Enter the your id to Verification : ";
	cin >> id1;
	
	if(id == id1) // Verify ID and Password
	{
		cout << "Yes, Your ID is Correct" << endl;
		start1:
		cout << endl << "Enter the your password to Verification : ";
		cin >> pswrd1;
		if(pswrd == pswrd1)
		{
			cout << "Yes, Your Password is Correct";
			
			do  //if Id Password is correct Than you can Enter option for Information Which you want
			{
				cout << endl << endl << "SuperMarket Billing System\n";
				cout << "Press 1. for Display all Records" << endl;
				cout << "Press 2. for Search Item Number" << endl;
				cout << "Press 3. for Exit" << endl;
				
				cout << "Enter Your Choice : ";
				cin >> choice;
				switch(choice) // Output Process
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
							x = false;			//If User Entered Item Number Does Not available so That Time We Will print Error msg.
							if(arr[i] == srch)
							{
								obj[i].output(i);
								x = true;
								break;
							}
						}
						if(x == false)
						{
							cout << "\nThis Number's Item Does not Available!!" << endl;
						}
						break;
						
					case 3 :
						cout << endl << "Program Exit, Thank you" << endl;
						break;
						
					default :
						cout << endl << "Enter the valid choice between (1 to 3) : " << endl;
						
				}
			}while(choice != 3); // if you enter 3 than process has been end
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
