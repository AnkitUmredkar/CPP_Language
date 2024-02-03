//1 Write a Program to get and display N numbers of Diamond companies information using encapsulcation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
using namespace std;

class Diamond
{
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo;
	public:
		
		void input(int i)
		{
			cout << "Enter the company id : ";
			cin >> comp_id;
			cin.ignore();
			
			cout << "Enter the company name : ";
			getline(cin, comp_name);
			
			cout << "Enter the company staff quantity : ";
			cin >> comp_staff_quantity;
			cin.ignore();
			
			cout << "Enter the company revenue per year : ";
			cin >> comp_revenue;
			cin.ignore();
			
			cout << "Enter the number of diamonds which are import  : ";
			cin >> comp_import_raw_diamonds;
			cin.ignore();
			
			cout << "Enter the number of diamonds which are export  : ";
			cin >> comp_export_diamonds;
			
			cout << "Enter the company ceo name : ";
			getline(cin, comp_ceo);
			cin.ignore();
			
			Diamond(i,comp_id,comp_name,comp_staff_quantity,comp_import_raw_diamonds,comp_export_diamonds,comp_ceo);
		}
		
		Diamond(int i,int comp_id,string comp_name,int comp_staff_quantity,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_ceo)
		{
			cout << endl << endl << "The" << i << " Company details are below : " << endl;
			cout << "------------------------------------------" << endl;
			cout << "Company ID          : " << comp_id << endl;
			cout << "Company Name        : " << comp_name << endl;
			cout << "Staff Quantity      : " << comp_staff_quantity << endl;
			cout << "Annual revenue      : " << comp_revenue << " in year" << endl;
			cout << "Import Raw Diamonds : " << comp_import_raw_diamonds << endl;
			cout << "Exported Diamonds   : " << comp_export_diamonds  << endl;
			cout << "Company's CEO name  : " << comp_export_diamonds  << endl;
			cout << "------------------------------------------";
		}
};

int main()
{
	int n,i;
	
	cout << "Enter the number of companys : ";
	cin >> n;
	
	Diamond a;
	
	for(i=1; i<=n; i++)
	{
		a.input(i);
	}
	
	
 	return 0;
}
