#include<iostream>
using namespace std;

int main()
{
	int choice,n,i,pos,elem;
	
	cout << "Enter the size of an array : ";
	cin >> n;
	
	int a[n];
	
	cout << endl << "Enter the elements : " << endl;
	
	for(i=0; i<n; i++)
	{
		cout << "Enter the a[" << i << "] : ";
		cin >> a[i];
	}
	
	do
	{
		cout << endl << endl << "===========================" << endl;
		cout << "Enter 1 for Insert" << endl;
		cout << "Enter 2 for Update" << endl;
		cout << "Enter 3 for Delet" << endl;
		cout << "Enter 4 for View all" << endl;
		cout << "Enter 0 for Exit" << endl;
		cout << endl << "Enter your Choice : ";
		cin >> choice;
		
		switch(choice)
		{
			case 1 :
				cout << "Enter the Position : ";
				cin >> pos;
				
				cout << "Enter the Element : ";
				cin >> elem;
				
				for(i=n-1; i>=pos; i--)
				{
					a[i+1] = a[i];
				}
				n++;
				
				a[pos] = elem;
				cout << "Element Insert Successfully...."; 
				break;
				
			case 2 :
				cout << "Enter the Position : ";
				cin >> pos;
				
				cout << "Enter the Element : ";
				cin >> elem;
				
				a[pos] = elem;
				
				cout << endl << "Element Update Successfilly....." << endl;
				
				break;
				
			case 3 :
				cout << "Enter the Position : ";
				cin >> pos;
				
				n--;
				for(i=pos; i<n; i++)//1 2 3 --> 2
				{
					a[i] = a[i+1];
				}
				
				cout << endl << "Element Delet Successfilly....." << endl;
				break;
			
			case 4 :
				cout << endl << "The Array is : "; 
				for(i=0; i<n; i++)
				{
					cout << a[i] << " ";
				}
				break;
				
			case 0:
				cout << endl << "CRUD Operation is Exit !!" << endl;
		}
	}while(choice != 0);
	
	return 0;
}
