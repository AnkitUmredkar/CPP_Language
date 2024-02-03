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
	int comp_id,comp_staff_quantity,comp_import_raw_diamonds,comp_export_diamonds;
	long long int comp_revenue;
	string comp_name,comp_ceo;
	public:
	Diamond(int id,int st_quantity,int revenue,int imp_d,int exp_d,string ceo,string name)
	{
		comp_id = id;
		comp_name = name;
		comp_staff_quantity = st_quantity;
		comp_revenue = revenue;
		comp_import_raw_diamonds = imp_d;
		comp_export_diamonds = exp_d;
		comp_ceo = ceo;
	}
	
	void output(int a)
	{
		cout << endl << endl << "The" << a+1 << " Company details are below : " << endl;
		cout << "------------------------------------------" << endl;
		cout << "Company ID          : " << comp_id << endl;
		cout << "Company Name        : " << comp_name << endl;
		cout << "Staff Quantity      : " << comp_staff_quantity << endl;
		cout << "Annual revenue      : " << comp_revenue << " in year" << endl;
		cout << "Import Raw Diamonds : " << comp_import_raw_diamonds << endl;
		cout << "Exported Diamonds   : " << comp_export_diamonds  << endl;
		cout << "Company's CEO name  : " << comp_ceo  << endl;
		cout << "------------------------------------------";
	}
};

int main()
{
	int n=1,i;
	int id,st_quantity,revenue,imp_d,exp_d;
	string ceo,name;
	
	cout << "Enter the number of companys : ";
	cin >> n;
	
	Diamond d[n] = Diamond(id,st_quantity,revenue,imp_d,exp_d,ceo,name);
	
	for(i=0; i<n; i++)
	{
		cout << endl << endl << "Enter the company " << i+1 << " details" << endl;
  		cout << "Enter the company id : ";
		cin >> id;
		cin.ignore();
		
		cout << "Enter the company name : ";
		getline(cin, name);
		
		cout << "Enter the company staff quantity : ";
		cin >> st_quantity;
		cin.ignore();
		
		cout << "Enter the company revenue per year : ";
		cin >> revenue;
		cin.ignore();
		
		cout << "Enter the number of diamonds which are import  : ";
		cin >> imp_d;
		cin.ignore();
		
		cout << "Enter the number of diamonds which are export  : ";
		cin >> exp_d;
		cin.ignore();
		
		cout << "Enter the company ceo name : ";
		getline(cin, ceo);
		
		d[i] = Diamond(id,st_quantity,revenue,imp_d,exp_d,ceo,name);
	}
	for(i=0; i<n; i++)
	{
		d[i].output(i);
	}
	
 	return 0;
}
